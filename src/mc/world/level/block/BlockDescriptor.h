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
        /**
         * @symbol ?resolve\@ResolveHelper\@BlockDescriptor\@\@QEAAX_N\@Z
         */
        MCAPI void resolve(bool); // NOLINT
    };

    class State {

    public:
        // prevent constructor by default
        State& operator=(State const&) = delete;
        State(State const&)            = delete;
        State()                        = delete;

    public:
        /**
         * @symbol ?getBlockState\@State\@BlockDescriptor\@\@QEBAPEBVBlockState\@\@XZ
         */
        MCAPI class BlockState const* getBlockState() const; // NOLINT
        /**
         * @symbol ??1State\@BlockDescriptor\@\@QEAA\@XZ
         */
        MCAPI ~State(); // NOLINT
    };

public:
    /**
     * @symbol ??0BlockDescriptor\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI BlockDescriptor(class BlockDescriptor const&); // NOLINT
    /**
     * @symbol
     * ??0BlockDescriptor\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEBV?$vector\@VState\@BlockDescriptor\@\@V?$allocator\@VState\@BlockDescriptor\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI BlockDescriptor(std::string const&, std::vector<class BlockDescriptor::State> const&&); // NOLINT
    /**
     * @symbol ??0BlockDescriptor\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI BlockDescriptor(class BlockDescriptor&&); // NOLINT
    /**
     * @symbol ??0BlockDescriptor\@\@QEAA\@XZ
     */
    MCAPI BlockDescriptor(); // NOLINT
    /**
     * @symbol ??0BlockDescriptor\@\@QEAA\@AEBVHashedString\@\@\@Z
     */
    MCAPI BlockDescriptor(class HashedString const&); // NOLINT
    /**
     * @symbol ?getBlockOrUnknownBlock\@BlockDescriptor\@\@QEBAAEBVBlock\@\@XZ
     */
    MCAPI class Block const& getBlockOrUnknownBlock() const; // NOLINT
    /**
     * @symbol ?getCompareType\@BlockDescriptor\@\@QEBAAEBW4CompareType\@1\@XZ
     */
    MCAPI enum class BlockDescriptor::CompareType const& getCompareType() const; // NOLINT
    /**
     * @symbol
     * ?getFullName\@BlockDescriptor\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getFullName() const; // NOLINT
    /**
     * @symbol
     * ?getStates\@BlockDescriptor\@\@QEBAAEBV?$vector\@VState\@BlockDescriptor\@\@V?$allocator\@VState\@BlockDescriptor\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class BlockDescriptor::State> const& getStates() const; // NOLINT
    /**
     * @symbol
     * ?getTagExpression\@BlockDescriptor\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getTagExpression() const; // NOLINT
    /**
     * @symbol ?isValid\@BlockDescriptor\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ?matches\@BlockDescriptor\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool matches(class BlockDescriptor const&) const; // NOLINT
    /**
     * @symbol ?matches\@BlockDescriptor\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool matches(class Block const&) const; // NOLINT
    /**
     * @symbol ??4BlockDescriptor\@\@QEAAXAEBV0\@\@Z
     */
    MCAPI void operator=(class BlockDescriptor const&); // NOLINT
    /**
     * @symbol ??4BlockDescriptor\@\@QEAAX$$QEAV0\@\@Z
     */
    MCAPI void operator=(class BlockDescriptor&&); // NOLINT
    /**
     * @symbol ??8BlockDescriptor\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class BlockDescriptor const&) const; // NOLINT
    /**
     * @symbol
     * ?toCompoundTag\@BlockDescriptor\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> toCompoundTag() const; // NOLINT
    /**
     * @symbol ?tryGetBlock\@BlockDescriptor\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const* tryGetBlock() const; // NOLINT
    /**
     * @symbol ?tryGetBlockNoLogging\@BlockDescriptor\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const* tryGetBlockNoLogging() const; // NOLINT
    /**
     * @symbol ??1BlockDescriptor\@\@QEAA\@XZ
     */
    MCAPI ~BlockDescriptor(); // NOLINT
    /**
     * @symbol
     * ?anyMatch\@BlockDescriptor\@\@SA_NAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@AEBV1\@\@Z
     */
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const&, class BlockDescriptor const&); // NOLINT
    /**
     * @symbol
     * ?anyMatch\@BlockDescriptor\@\@SA_NAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@AEBVBlock\@\@\@Z
     */
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const&, class Block const&); // NOLINT
    /**
     * @symbol ?bindType\@BlockDescriptor\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol ?fromCompoundTag\@BlockDescriptor\@\@SA?AV1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class BlockDescriptor fromCompoundTag(class CompoundTag const&); // NOLINT
    /**
     * @symbol
     * ?fromTagExpression\@BlockDescriptor\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4MolangVersion\@\@\@Z
     */
    MCAPI static class BlockDescriptor fromTagExpression(std::string const&, enum class MolangVersion); // NOLINT
    /**
     * @symbol ?JSON_NAME_FIELD\@BlockDescriptor\@\@2QBDB
     */
    MCAPI static char const JSON_NAME_FIELD[]; // NOLINT
    /**
     * @symbol ?JSON_STATES_FIELD\@BlockDescriptor\@\@2QBDB
     */
    MCAPI static char const JSON_STATES_FIELD[]; // NOLINT
    /**
     * @symbol ?JSON_TAGS_FIELD\@BlockDescriptor\@\@2QBDB
     */
    MCAPI static char const JSON_TAGS_FIELD[]; // NOLINT

    // private:
    /**
     * @symbol ?_resolve\@BlockDescriptor\@\@AEBAX_N\@Z
     */
    MCAPI void _resolve(bool) const; // NOLINT

private:
};
