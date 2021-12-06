//Extra Part For ScriptEngine.hpp
#ifdef EXTRA_INCLUDE_PART_SCRIPTENGINE
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct ScriptQueueData {
    ScriptQueueData() = delete;
    ScriptQueueData(ScriptQueueData const&) = delete;
    ScriptQueueData(ScriptQueueData const&&) = delete;
};

#endif
