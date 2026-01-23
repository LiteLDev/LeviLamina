#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/world/level/poi/TypeId.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
// clang-format on

struct LocatePoiCommand : public ::Command {
public:
    // LocatePoiCommand inner types declare
    // clang-format off
    struct ResourceOrTagArg;
    // clang-format on

    // LocatePoiCommand inner types define
    enum class CmdName : uchar {
        Poi = 0,
    };

    enum class PoiTagType : uint64 {};

    struct ResourceOrTagArg {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2> mUnkd306bc;
        ::ll::UntypedStorage<8, 8> mUnk2c6283;
        ::ll::UntypedStorage<8, 8> mUnkdcdd27;
        ::ll::UntypedStorage<8, 8> mUnk1729f7;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResourceOrTagArg& operator=(ResourceOrTagArg const&);
        ResourceOrTagArg(ResourceOrTagArg const&);
        ResourceOrTagArg();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkd4bba5;
    ::ll::UntypedStorage<2, 2> mUnkf7c960;
    ::ll::UntypedStorage<8, 8> mUnk6314b8;
    // NOLINTEND

public:
    // prevent constructor by default
    LocatePoiCommand& operator=(LocatePoiCommand const&);
    LocatePoiCommand(LocatePoiCommand const&);
    LocatePoiCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;

    virtual ~LocatePoiCommand() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
