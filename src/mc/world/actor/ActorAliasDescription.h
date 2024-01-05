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
    // vIndex: 0, symbol: ??1ActorAliasDescription@@UEAA@XZ
    virtual ~ActorAliasDescription();

    // vIndex: 1, symbol: ?getJsonName@ActorAliasDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // symbol:
    // ?getAliasInfo@ActorAliasDescription@@QEBAPEBUAliasInfoDescription@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct AliasInfoDescription const* getAliasInfo(std::string const& name) const;

    // symbol: ?parse@ActorAliasDescription@@QEAAXAEAVValue@Json@@_N@Z
    MCAPI void parse(class Json::Value& root, bool isVanilla);

    // NOLINTEND
};
