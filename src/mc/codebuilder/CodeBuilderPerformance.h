#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
// clang-format on

class CodeBuilderPerformance {
public:
    // CodeBuilderPerformance inner types define
    enum class Stage : int {
        CacheCodescreenStart  = 0,
        CacheCodescreenFinish = 1,
        WebviewLoadStart      = 2,
        WebviewLoadFinish     = 3,
        CreateNewProject      = 4,
        ProjectLoadStart      = 5,
        ProjectLoadFinish     = 6,
        TutorialLoadStart     = 7,
        TutorialLoadFinish    = 8,
        EditorContentLoaded   = 9,
        LoadBlockly           = 10,
        BlocksContentLoaded   = 11,
        NetworkRequest        = 12,
        DomLoaded             = 13,
        CodeRunStart          = 14,
        CodeRunComplete       = 15,
        FirstCommandSent      = 16,
        FirstCommandReceived  = 17,
        FirstCommandRun       = 18,
    };

    enum class Flags : int {
        AwaitingFirstCommandSent     = 0,
        AwaitingFirstCommandReceived = 1,
        AwaitingFirstCommandRun      = 2,
        CodeScreenCached             = 3,
        CodeRunStarted               = 4,
        FirstWorldLaunch             = 5,
        FirstSessionLaunch           = 6,
        TutorialCached               = 7,
        Count                        = 8,
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void fireCodeBuilderLoadPerformanceEvent(
        ::IMinecraftEventing const*     eventing,
        ::CodeBuilderPerformance::Stage stage,
        ::std::string_view              codeProjectId,
        uint64                          tutorialSize,
        uint64                          downloadSize,
        ::std::chrono::milliseconds     duration
    );

    MCNAPI static ::std::chrono::milliseconds getElapsedTime(::CodeBuilderPerformance::Stage stage);

    MCNAPI static ::std::string toString(::CodeBuilderPerformance::Stage stage);

    MCNAPI static void updateLastTimestamp();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::std::chrono::steady_clock::time_point>& mCacheCodeScreenTimeStart();

    MCNAPI static ::std::string& mCodeBuilderProjectId();

    MCNAPI static ::std::string& mCodeBuilderSessionId();

    MCNAPI static ::std::optional<::std::chrono::steady_clock::time_point>& mCodeRunStart();

    MCNAPI static ::std::optional<::std::chrono::steady_clock::time_point>& mCreateNewProjectTimeStart();

    MCNAPI static ::std::string& mEditorName();

    MCNAPI static ::std::bitset<8>& mFlags();

    MCNAPI static ::std::optional<::std::chrono::steady_clock::time_point>& mLastTimestamp();

    MCNAPI static ::std::optional<::std::chrono::steady_clock::time_point>& mProjectLoadTimeStart();

    MCNAPI static ::std::optional<::std::chrono::steady_clock::time_point>& mTutorialLoadTimeStart();

    MCNAPI static ::std::optional<::std::chrono::steady_clock::time_point>& mWebviewLoadTimeStart();
    // NOLINTEND
};
