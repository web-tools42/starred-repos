// Copyright 2016 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_COMPILER_EFFECT_CONTROL_LINEARIZER_H_
#define V8_COMPILER_EFFECT_CONTROL_LINEARIZER_H_

#include <vector>

#include "src/handles/handles.h"

namespace v8 {
namespace internal {

class Map;
class Zone;

namespace compiler {

class JSGraph;
class NodeOriginTable;
class Schedule;
class SourcePositionTable;
class JSHeapBroker;

V8_EXPORT_PRIVATE void LinearizeEffectControl(
    JSGraph* graph, Schedule* schedule, Zone* temp_zone,
    SourcePositionTable* source_positions, NodeOriginTable* node_origins,
    JSHeapBroker* broker);

// Performs effect control linearization lowering in addition to machine
// lowering, producing a scheduled graph that is ready for instruction
// selection.
V8_EXPORT_PRIVATE void LowerToMachineSchedule(
    JSGraph* graph, Schedule* schedule, Zone* temp_zone,
    SourcePositionTable* source_positions, NodeOriginTable* node_origins,
    JSHeapBroker* broker);

}  // namespace compiler
}  // namespace internal
}  // namespace v8

#endif  // V8_COMPILER_EFFECT_CONTROL_LINEARIZER_H_
