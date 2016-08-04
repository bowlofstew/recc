

/*
    Copyright 2016 Robert Elder Software Inc.
    
    Licensed under the Apache License, Version 2.0 (the "License"); you may not 
    use this file except in compliance with the License.  You may obtain a copy 
    of the License at
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software 
    distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
    WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the 
    License for the specific language governing permissions and limitations 
    under the License.
*/

/*GETS_REPLACED_WITH_INCLUDES*/

struct type_engine_state{
	struct scope_level * top_scope;
	struct enum_type_engine_operation_type_list reversible_operations; /*  An array that describes all the operations we've done so we can reverse them */
	struct struct_struct_or_union_specifier_id_list saved_struct_or_union_specifier_ids;
	struct struct_identifier_id_list saved_identifier_ids;
	struct enum_c_token_type_list simple_type_specifiers;
	struct struct_aggregate_specifier_details_list aggregate_specifiers;
	struct enum_c_token_type_list simple_type_qualifiers;
	struct enum_c_token_type_list storage_class_specifiers;
	struct struct_specifier_or_qualifier_details_list specifier_or_qualifiers;
	struct struct_specifier_or_qualifier_list_item_details_list specifier_or_qualifier_list_items;
	struct struct_parameter_list_details_list parameter_lists;
	struct struct_declarator_part_details_list declarator_parts;
	struct struct_declarator_part_list_item_details_list declarator_part_list_items;
	struct struct_pointer_part_details_list pointer_parts;
	struct struct_function_part_details_list function_parts;
	struct struct_array_part_details_list array_parts;
	struct struct_bitfield_or_declarator_details_list bitfield_or_declarators;
	struct struct_general_type_details_list general_types;
	struct struct_general_type_list_item_details_list general_type_list_items;
	struct struct_struct_or_union_specifier_details_list struct_or_union_specifiers;
	struct struct_scoped_struct_or_union_specifier_details_list scoped_struct_or_union_specifiers;
	struct struct_union_specifier_details_list union_specifiers;
	struct struct_struct_specifier_details_list struct_specifiers;
	struct struct_c_lexer_token_list identifiers;
	struct struct_parser_node_ptr_list constant_expression_parser_nodes;
	struct struct_scope_level_ptr_list scope_levels;
	struct enum_c_token_type_to_struct_simple_specifier_id_map simple_type_specifiers_map; /*  Used to determine the index of any existing type specifier */
	struct struct_aggregate_specifier_details_to_struct_aggregate_specifier_id_map aggregate_specifiers_map;
	struct enum_c_token_type_to_struct_type_qualifier_id_map simple_type_qualifiers_map;
	struct enum_c_token_type_to_struct_storage_class_specifier_id_map storage_class_specifiers_map;
	struct struct_specifier_or_qualifier_details_to_struct_specifier_or_qualifier_id_map specifier_or_qualifiers_map; /*  type specifier, type qualifier, or storage class specifier */
	struct struct_specifier_or_qualifier_list_item_details_to_struct_specifier_or_qualifier_list_item_id_map specifier_or_qualifier_list_items_map;
	struct struct_parameter_list_details_to_struct_parameter_list_id_map parameter_lists_map;
	struct struct_declarator_part_details_to_struct_declarator_part_id_map declarator_parts_map;
	struct struct_declarator_part_list_item_details_to_struct_declarator_part_list_item_id_map declarator_part_list_items_map;
	struct struct_pointer_part_details_to_struct_pointer_part_id_map pointer_parts_map;
	struct struct_function_part_details_to_struct_function_part_id_map function_parts_map;
	struct struct_array_part_details_to_struct_array_part_id_map array_parts_map;
	struct struct_bitfield_or_declarator_details_to_struct_bitfield_or_declarator_id_map bitfield_or_declarators_map;
	struct struct_general_type_details_to_struct_general_type_id_map general_types_map;
	struct struct_general_type_list_item_details_to_struct_general_type_list_item_id_map general_type_list_items_map;
	struct struct_struct_or_union_specifier_details_to_struct_struct_or_union_specifier_id_map struct_or_union_specifiers_map;
	struct struct_scoped_struct_or_union_specifier_details_to_struct_scoped_struct_or_union_specifier_id_map scoped_struct_or_union_specifiers_map;
	struct struct_union_specifier_details_to_struct_union_specifier_id_map union_specifiers_map;
	struct struct_struct_specifier_details_to_struct_struct_specifier_id_map struct_specifiers_map;
	struct struct_parser_node_ptr_to_struct_parser_node_id_map constant_expression_parser_nodes_map;
	struct struct_scope_level_ptr_to_struct_scope_level_id_map scope_levels_map;
	struct struct_c_lexer_token_to_struct_identifier_id_map identifiers_map;
	struct function_definition_collection function_definitions;
	struct void_ptr_list stored_pointers;
	struct struct_parser_node_ptr_to_struct_scope_level_id_map parser_node_scope_associations;
	unsigned int current_scope_depth;
};