import connectQueryRules from 'instantsearch.js/es/connectors/query-rules/connectQueryRules';

import { useConnector } from './useConnector';

import type {
  QueryRulesConnectorParams,
  QueryRulesWidgetDescription,
} from 'instantsearch.js/es/connectors/query-rules/connectQueryRules';

export type UseQueryRulesProps = QueryRulesConnectorParams;

export function useQueryRules(props?: UseQueryRulesProps) {
  return useConnector<QueryRulesConnectorParams, QueryRulesWidgetDescription>(
    connectQueryRules,
    props
  );
}
