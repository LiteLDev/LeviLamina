//Extra Part For JsonUtil.hpp
#ifdef EXTRA_INCLUDE_PART_JSONUTIL
// Include Headers or Declare Types Here

#else
// Add Member There
class JsonSchemaNodeBase {
public:
    JsonSchemaNodeBase() = delete;
    JsonSchemaNodeBase(JsonSchemaNodeBase const&) = delete;
    JsonSchemaNodeBase(JsonSchemaNodeBase const&&) = delete;
};
class EmptyClass {
public:
    EmptyClass() = delete;
    EmptyClass(EmptyClass const&) = delete;
    EmptyClass(EmptyClass const&&) = delete;
};
template <typename T0, typename T1>
class JsonSchemaObjectNode {
public:
    JsonSchemaObjectNode() = delete;
    JsonSchemaObjectNode(JsonSchemaObjectNode const&) = delete;
    JsonSchemaObjectNode(JsonSchemaObjectNode const&&) = delete;
};
template <typename T0, typename T1>
class JsonParseState {
public:
    JsonParseState() = delete;
    JsonParseState(JsonParseState const&) = delete;
    JsonParseState(JsonParseState const&&) = delete;
};

#endif
