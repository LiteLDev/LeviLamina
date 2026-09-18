#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/PoiTagCommandParam.h"
#include "mc/server/commands/PoiTypeCommandParam.h"
#include "mc/world/level/poi/TagId.h"
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

    struct ResourceOrTagArg {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::Poi::TypeId>       mType;
        ::ll::TypedStorage<2, 2, ::Poi::TagId>        mTag;
        ::ll::TypedStorage<1, 1, bool>                mTypeSet;
        ::ll::TypedStorage<8, 8, ::Poi::TagProvider*> mTags;
        ::ll::TypedStorage<8, 8, ::Poi::Registry*>    mRegistry;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::LocatePoiCommand::CmdName> mCmd;
    ::ll::TypedStorage<2, 2, ::PoiTypeCommandParam>       mPoiType;
    ::ll::TypedStorage<1, 1, bool>                        mTypeSet;
    ::ll::TypedStorage<2, 2, ::PoiTagCommandParam>        mPoiTagType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;


    // NOLINTEND
};
