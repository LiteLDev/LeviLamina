#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorAliasDescription {
public:
    // prevent constructor by default
    ActorAliasDescription& operator=(ActorAliasDescription const&);
    ActorAliasDescription(ActorAliasDescription const&);
    ActorAliasDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorAliasDescription();

    // vIndex: 1
    virtual char const* getJsonName() const;

    MCAPI struct AliasInfoDescription const* getAliasInfo(std::string const& name) const;

    MCAPI void parse(class Json::Value& root, bool isVanilla);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
