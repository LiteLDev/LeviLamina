#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/world/level/poi/TypeId.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
namespace Poi { class TagProvider; }
namespace Poi { struct Registry; }
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
        ::ll::TypedStorage<2, 2, ::Poi::TypeId>       mType;
        ::ll::TypedStorage<8, 8, uint64>              mTag;
        ::ll::TypedStorage<8, 8, ::Poi::TagProvider*> mTags;
        ::ll::TypedStorage<8, 8, ::Poi::Registry*>    mRegistry;
        // NOLINTEND
    };

    using PoiType = ::Poi::TypeId;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::LocatePoiCommand::CmdName>    mCmd;
    ::ll::TypedStorage<2, 2, ::Poi::TypeId>                  mPoiType;
    ::ll::TypedStorage<8, 8, ::LocatePoiCommand::PoiTagType> mPoiTagType;
    // NOLINTEND

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
