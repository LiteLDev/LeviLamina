#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockDescriptor {
public:
    // BlockDescriptor inner types declare
    // clang-format off
    struct CompoundProxy;
    class ResolveHelper;
    struct State;
    // clang-format on

    // BlockDescriptor inner types define
    enum class CompareType {};

    struct CompoundProxy {
    public:
        // prevent constructor by default
        CompoundProxy(CompoundProxy const&);
        CompoundProxy();

    public:
        // NOLINTBEGIN
        // symbol: ?fromInt@CompoundProxy@BlockDescriptor@@QEAAXH@Z
        MCAPI void fromInt(int);

        // symbol:
        // ?fromString@CompoundProxy@BlockDescriptor@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI void fromString(std::string);

        // symbol: ??4CompoundProxy@BlockDescriptor@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct BlockDescriptor::CompoundProxy& operator=(struct BlockDescriptor::CompoundProxy const&);

        // symbol: ??1CompoundProxy@BlockDescriptor@@QEAA@XZ
        MCAPI ~CompoundProxy();

        // symbol: ?bindType@CompoundProxy@BlockDescriptor@@SAXAEAUReflectionCtx@cereal@@@Z
        MCAPI static void bindType(struct cereal::ReflectionCtx&);

        // NOLINTEND
    };

    class ResolveHelper {
    public:
        // prevent constructor by default
        ResolveHelper& operator=(ResolveHelper const&);
        ResolveHelper(ResolveHelper const&);
        ResolveHelper();

    public:
        // NOLINTBEGIN
        // symbol: ?resolve@ResolveHelper@BlockDescriptor@@QEAAX_N@Z
        MCAPI void resolve(bool);

        // NOLINTEND
    };

    struct State {
    public:
        // prevent constructor by default
        State& operator=(State const&);
        State(State const&);
        State();

    public:
        // NOLINTBEGIN
        // symbol: ??0State@BlockDescriptor@@QEAA@VHashedString@@UCompoundProxy@1@@Z
        MCAPI State(class HashedString, struct BlockDescriptor::CompoundProxy);

        // symbol: ??1State@BlockDescriptor@@QEAA@XZ
        MCAPI ~State();

        // NOLINTEND
    };

public:
    // NOLINTBEGIN
    // symbol: ??0BlockDescriptor@@QEAA@AEBV0@@Z
    MCAPI BlockDescriptor(class BlockDescriptor const&);

    // symbol: ??0BlockDescriptor@@QEAA@$$QEAV0@@Z
    MCAPI BlockDescriptor(class BlockDescriptor&&);

    // symbol: ??0BlockDescriptor@@QEAA@XZ
    MCAPI BlockDescriptor();

    // symbol:
    // ??0BlockDescriptor@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$vector@UState@BlockDescriptor@@V?$allocator@UState@BlockDescriptor@@@std@@@2@@Z
    MCAPI BlockDescriptor(std::string const&, std::vector<struct BlockDescriptor::State>&&);

    // symbol: ??0BlockDescriptor@@QEAA@AEBVHashedString@@@Z
    MCAPI explicit BlockDescriptor(class HashedString const&);

    // symbol: ?getBlockOrUnknownBlock@BlockDescriptor@@QEBAAEBVBlock@@XZ
    MCAPI class Block const& getBlockOrUnknownBlock() const;

    // symbol: ?getCompareType@BlockDescriptor@@QEBAAEBW4CompareType@1@XZ
    MCAPI ::BlockDescriptor::CompareType const& getCompareType() const;

    // symbol: ?getFullName@BlockDescriptor@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getFullName() const;

    // symbol:
    // ?getStates@BlockDescriptor@@QEBAAEBV?$vector@UState@BlockDescriptor@@V?$allocator@UState@BlockDescriptor@@@std@@@std@@XZ
    MCAPI std::vector<struct BlockDescriptor::State> const& getStates() const;

    // symbol:
    // ?getTagExpression@BlockDescriptor@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getTagExpression() const;

    // symbol: ?isValid@BlockDescriptor@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?matches@BlockDescriptor@@QEBA_NAEBV1@@Z
    MCAPI bool matches(class BlockDescriptor const&) const;

    // symbol: ?matches@BlockDescriptor@@QEBA_NAEBVBlock@@@Z
    MCAPI bool matches(class Block const&) const;

    // symbol: ??4BlockDescriptor@@QEAAXAEBV0@@Z
    MCAPI void operator=(class BlockDescriptor const&);

    // symbol: ??4BlockDescriptor@@QEAAX$$QEAV0@@Z
    MCAPI void operator=(class BlockDescriptor&&);

    // symbol: ??8BlockDescriptor@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class BlockDescriptor const&) const;

    // symbol:
    // ?toCompoundTag@BlockDescriptor@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> toCompoundTag() const;

    // symbol: ?tryGetBlock@BlockDescriptor@@QEBAPEBVBlock@@XZ
    MCAPI class Block const* tryGetBlock() const;

    // symbol: ?tryGetBlockNoLogging@BlockDescriptor@@QEBAPEBVBlock@@XZ
    MCAPI class Block const* tryGetBlockNoLogging() const;

    // symbol: ??1BlockDescriptor@@QEAA@XZ
    MCAPI ~BlockDescriptor();

    // symbol:
    // ?anyMatch@BlockDescriptor@@SA_NAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@AEBVBlock@@@Z
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const&, class Block const&);

    // symbol:
    // ?anyMatch@BlockDescriptor@@SA_NAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@AEBV1@@Z
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const&, class BlockDescriptor const&);

    // symbol: ?bindType@BlockDescriptor@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?fromCompoundTag@BlockDescriptor@@SA?AV1@AEBVCompoundTag@@@Z
    MCAPI static class BlockDescriptor fromCompoundTag(class CompoundTag const&);

    // symbol:
    // ?fromTagExpression@BlockDescriptor@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4MolangVersion@@@Z
    MCAPI static class BlockDescriptor fromTagExpression(std::string const&, ::MolangVersion);

    // symbol: ?JSON_NAME_FIELD@BlockDescriptor@@2QBDB
    MCAPI static char const JSON_NAME_FIELD[];

    // symbol: ?JSON_STATES_FIELD@BlockDescriptor@@2QBDB
    MCAPI static char const JSON_STATES_FIELD[];

    // symbol: ?JSON_TAGS_FIELD@BlockDescriptor@@2QBDB
    MCAPI static char const JSON_TAGS_FIELD[];

    // NOLINTEND
};
