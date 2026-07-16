#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

class MinecraftReportGameListener : public ::gametest::IGameTestListener,
                                    public ::std::enable_shared_from_this<::MinecraftReportGameListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk80c891;
    ::ll::UntypedStorage<8, 8> mUnk479f87;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftReportGameListener& operator=(MinecraftReportGameListener const&);
    MinecraftReportGameListener(MinecraftReportGameListener const&);
    MinecraftReportGameListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftReportGameListener() /*override*/ = default;

    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance&) /*override*/;

    virtual void onTestPassed(::gametest::BaseGameTestInstance&) /*override*/;

    virtual void onTestFailed(::gametest::BaseGameTestInstance&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
