#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefintionDescription.h"

// auto generated forward declare list
// clang-format off
struct AliasInfoDescription;
namespace Json { class Value; }
// clang-format on

struct ActorAliasDescription : public ::DefintionDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8ea846;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAliasDescription& operator=(ActorAliasDescription const&);
    ActorAliasDescription(ActorAliasDescription const&);
    ActorAliasDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 0
    virtual ~ActorAliasDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::AliasInfoDescription const* getAliasInfo(::std::string const& name) const;

    MCNAPI void parse(::Json::Value& root, bool isVanilla);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getJsonName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
