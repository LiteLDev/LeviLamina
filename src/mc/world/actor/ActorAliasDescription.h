#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorAliasDescription {
public:
    // prevent constructor by default
    ActorAliasDescription& operator=(ActorAliasDescription const&) = delete;
    ActorAliasDescription(ActorAliasDescription const&)            = delete;
    ActorAliasDescription()                                        = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getJsonName@ActorAliasDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // symbol: ??1ActorAliasDescription@@UEAA@XZ
    MCVAPI ~ActorAliasDescription();

    // symbol: ?parse@ActorAliasDescription@@QEAAXAEAVValue@Json@@_N@Z
    MCAPI void parse(class Json::Value&, bool);

    // NOLINTEND
};
