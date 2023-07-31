#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockDescriptor {
public:
    // BlockDescriptor inner types declare
    // clang-format off
    class ResolveHelper;
    class State;
    // clang-format on

    // BlockDescriptor inner types define
    enum class CompareType {};

    class ResolveHelper {

    public:
        // prevent constructor by default
        ResolveHelper& operator=(ResolveHelper const&) = delete;
        ResolveHelper(ResolveHelper const&)            = delete;
        ResolveHelper()                                = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ?resolve\@ResolveHelper\@BlockDescriptor\@\@QEAAX_N\@Z
         */
        MCAPI void resolve(bool);
        // NOLINTEND
    };

    class State {

    public:
        // prevent constructor by default
        State& operator=(State const&) = delete;
        State(State const&)            = delete;
        State()                        = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ?getBlockState\@State\@BlockDescriptor\@\@QEBAPEBVBlockState\@\@XZ
         */
        MCAPI class BlockState const* getBlockState() const;
        /**
         * @symbol ??1State\@BlockDescriptor\@\@QEAA\@XZ
         */
        MCAPI ~State();
        // NOLINTEND
    };

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BlockDescriptor\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI BlockDescriptor(class BlockDescriptor const&);
    /**
     * @symbol
     * ??0BlockDescriptor\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEBV?$vector\@VState\@BlockDescriptor\@\@V?$allocator\@VState\@BlockDescriptor\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI BlockDescriptor(std::string const&, std::vector<class BlockDescriptor::State> const&&);
    /**
     * @symbol ??0BlockDescriptor\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI BlockDescriptor(class BlockDescriptor&&);
    /**
     * @symbol ??0BlockDescriptor\@\@QEAA\@XZ
     */
    MCAPI BlockDescriptor();
    /**
     * @symbol ??0BlockDescriptor\@\@QEAA\@AEBVHashedString\@\@\@Z
     */
    MCAPI BlockDescriptor(class HashedString const&);
    /**
     * @symbol
     * ?anyMatch\@BlockDescriptor\@\@SA_NAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@AEBV1\@\@Z
     */
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const&, class BlockDescriptor const&);
    /**
     * @symbol
     * ?anyMatch\@BlockDescriptor\@\@SA_NAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@AEBVBlock\@\@\@Z
     */
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const&, class Block const&);
    /**
     * @symbol ?bindType\@BlockDescriptor\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?fromCompoundTag\@BlockDescriptor\@\@SA?AV1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class BlockDescriptor fromCompoundTag(class CompoundTag const&);
    /**
     * @symbol
     * ?fromTagExpression\@BlockDescriptor\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4MolangVersion\@\@\@Z
     */
    MCAPI static class BlockDescriptor fromTagExpression(std::string const&, enum class MolangVersion);
    /**
     * @symbol ?getBlockOrUnknownBlock\@BlockDescriptor\@\@QEBAAEBVBlock\@\@XZ
     */
    MCAPI class Block const& getBlockOrUnknownBlock() const;
    /**
     * @symbol ?getCompareType\@BlockDescriptor\@\@QEBAAEBW4CompareType\@1\@XZ
     */
    MCAPI enum class BlockDescriptor::CompareType const& getCompareType() const;
    /**
     * @symbol
     * ?getFullName\@BlockDescriptor\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getFullName() const;
    /**
     * @symbol
     * ?getStates\@BlockDescriptor\@\@QEBAAEBV?$vector\@VState\@BlockDescriptor\@\@V?$allocator\@VState\@BlockDescriptor\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class BlockDescriptor::State> const& getStates() const;
    /**
     * @symbol
     * ?getTagExpression\@BlockDescriptor\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getTagExpression() const;
    /**
     * @symbol ?isValid\@BlockDescriptor\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ?matches\@BlockDescriptor\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool matches(class BlockDescriptor const&) const;
    /**
     * @symbol ?matches\@BlockDescriptor\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool matches(class Block const&) const;
    /**
     * @symbol ??4BlockDescriptor\@\@QEAAXAEBV0\@\@Z
     */
    MCAPI void operator=(class BlockDescriptor const&);
    /**
     * @symbol ??4BlockDescriptor\@\@QEAAX$$QEAV0\@\@Z
     */
    MCAPI void operator=(class BlockDescriptor&&);
    /**
     * @symbol ??8BlockDescriptor\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class BlockDescriptor const&) const;
    /**
     * @symbol
     * ?toCompoundTag\@BlockDescriptor\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> toCompoundTag() const;
    /**
     * @symbol ?tryGetBlock\@BlockDescriptor\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const* tryGetBlock() const;
    /**
     * @symbol ?tryGetBlockNoLogging\@BlockDescriptor\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const* tryGetBlockNoLogging() const;
    /**
     * @symbol ??1BlockDescriptor\@\@QEAA\@XZ
     */
    MCAPI ~BlockDescriptor();
    /**
     * @symbol ?JSON_NAME_FIELD\@BlockDescriptor\@\@2QBDB
     */
    MCAPI static char const JSON_NAME_FIELD[];
    /**
     * @symbol ?JSON_STATES_FIELD\@BlockDescriptor\@\@2QBDB
     */
    MCAPI static char const JSON_STATES_FIELD[];
    /**
     * @symbol ?JSON_TAGS_FIELD\@BlockDescriptor\@\@2QBDB
     */
    MCAPI static char const JSON_TAGS_FIELD[];
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_resolve\@BlockDescriptor\@\@AEBAX_N\@Z
     */
    MCAPI void _resolve(bool) const;
    // NOLINTEND
};
