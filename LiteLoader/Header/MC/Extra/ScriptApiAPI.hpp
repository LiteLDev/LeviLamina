//Extra Part For ScriptApi.hpp
#ifdef EXTRA_INCLUDE_PART_SCRIPTAPI
// Include Headers or Declare Types Here

#else
// Add Member There
class ScriptVersionInfo {
public:
    ScriptVersionInfo() = delete;
    ScriptVersionInfo(ScriptVersionInfo const&) = delete;
    ScriptVersionInfo(ScriptVersionInfo const&&) = delete;
};
class ScriptObjectHandle {
public:
    ScriptObjectHandle() = delete;
    ScriptObjectHandle(ScriptObjectHandle const&) = delete;
    ScriptObjectHandle(ScriptObjectHandle const&&) = delete;
};
class ScriptReportItem {
public:
    ScriptReportItem() = delete;
    ScriptReportItem(ScriptReportItem const&) = delete;
    ScriptReportItem(ScriptReportItem const&&) = delete;
};
class ScriptReport {
public:
    ScriptReport() = delete;
    ScriptReport(ScriptReport const&) = delete;
    ScriptReport(ScriptReport const&&) = delete;
};
class ScriptCallbackInterface {
public:
    ScriptCallbackInterface() = delete;
    ScriptCallbackInterface(ScriptCallbackInterface const&) = delete;
    ScriptCallbackInterface(ScriptCallbackInterface const&&) = delete;
};

#endif
