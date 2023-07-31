#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestSequence; }
namespace gametest { enum class GameTestErrorType; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace gametest {

class BaseGameTestHelper {

public:
    // prevent constructor by default
    BaseGameTestHelper& operator=(BaseGameTestHelper const&) = delete;
    BaseGameTestHelper(BaseGameTestHelper const&)            = delete;
    BaseGameTestHelper()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BaseGameTestHelper\@gametest\@\@QEAA\@AEAVBaseGameTestInstance\@1\@\@Z
     */
    MCAPI BaseGameTestHelper(class gametest::BaseGameTestInstance&);
    /**
     * @symbol
     * ?assertCondition\@BaseGameTestHelper\@gametest\@\@QEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@\@Z
     */
    MCAPI std::optional<struct gametest::GameTestError> assertCondition(bool, std::string const&);
    /**
     * @symbol ?fail\@BaseGameTestHelper\@gametest\@\@QEAAXUGameTestError\@2\@\@Z
     */
    MCAPI void fail(struct gametest::GameTestError);
    /**
     * @symbol
     * ?failIf\@BaseGameTestHelper\@gametest\@\@QEAAXV?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI void failIf(std::function<std::optional<struct gametest::GameTestError>(void)>);
    /**
     * @symbol
     * ?generateErrorWithContext\@BaseGameTestHelper\@gametest\@\@QEBA?AUGameTestError\@2\@W4GameTestErrorType\@2\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@6\@AEBVBlockPos\@\@\@Z
     */
    MCAPI struct gametest::GameTestError
    generateErrorWithContext(enum class gametest::GameTestErrorType, std::string, std::vector<std::string>, class BlockPos const&)
        const;
    /**
     * @symbol
     * ?generateErrorWithContext\@BaseGameTestHelper\@gametest\@\@QEBA?AUGameTestError\@2\@W4GameTestErrorType\@2\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI struct gametest::GameTestError
    generateErrorWithContext(enum class gametest::GameTestErrorType, std::string, class BlockPos const&) const;
    /**
     * @symbol ?getTestDirection\@BaseGameTestHelper\@gametest\@\@QEBAEXZ
     */
    MCAPI unsigned char getTestDirection() const;
    /**
     * @symbol ?getTestRotationAngle\@BaseGameTestHelper\@gametest\@\@QEBAMXZ
     */
    MCAPI float getTestRotationAngle() const;
    /**
     * @symbol
     * ?rotateDirection\@BaseGameTestHelper\@gametest\@\@QEBA?AV?$variant\@UGameTestError\@gametest\@\@E\@std\@\@E\@Z
     */
    MCAPI std::variant<struct gametest::GameTestError, unsigned char> rotateDirection(unsigned char) const;
    /**
     * @symbol
     * ?rotateVector\@BaseGameTestHelper\@gametest\@\@QEBA?AV?$variant\@UGameTestError\@gametest\@\@VVec3\@\@\@std\@\@AEBVVec3\@\@\@Z
     */
    MCAPI std::variant<struct gametest::GameTestError, class Vec3> rotateVector(class Vec3 const&) const;
    /**
     * @symbol
     * ?runAfterDelay\@BaseGameTestHelper\@gametest\@\@QEAAXHV?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI void runAfterDelay(int, std::function<std::optional<struct gametest::GameTestError>(void)>);
    /**
     * @symbol
     * ?runAtTickTime\@BaseGameTestHelper\@gametest\@\@QEAAXHV?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI void runAtTickTime(int, std::function<std::optional<struct gametest::GameTestError>(void)>);
    /**
     * @symbol ?startSequence\@BaseGameTestHelper\@gametest\@\@QEAAAEAVGameTestSequence\@2\@XZ
     */
    MCAPI class gametest::GameTestSequence& startSequence();
    /**
     * @symbol ?succeed\@BaseGameTestHelper\@gametest\@\@QEAAXXZ
     */
    MCAPI void succeed();
    /**
     * @symbol
     * ?succeedIf\@BaseGameTestHelper\@gametest\@\@QEAAXV?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI void succeedIf(std::function<std::optional<struct gametest::GameTestError>(void)>);
    /**
     * @symbol ?succeedOnTick\@BaseGameTestHelper\@gametest\@\@QEAAXH\@Z
     */
    MCAPI void succeedOnTick(int);
    /**
     * @symbol
     * ?succeedOnTickWhen\@BaseGameTestHelper\@gametest\@\@QEAAXHV?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI void succeedOnTickWhen(int, std::function<std::optional<struct gametest::GameTestError>(void)>);
    /**
     * @symbol
     * ?succeedWhen\@BaseGameTestHelper\@gametest\@\@QEAAXV?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI void succeedWhen(std::function<std::optional<struct gametest::GameTestError>(void)>);
    /**
     * @symbol
     * ?until\@BaseGameTestHelper\@gametest\@\@QEAAXV?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@0\@Z
     */
    MCAPI void
        until(std::function<std::optional<struct gametest::GameTestError>(void)>, std::function<std::optional<struct gametest::GameTestError>(void)>);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_absolutePos\@BaseGameTestHelper\@gametest\@\@IEBA?AVBlockPos\@\@AEBV3\@\@Z
     */
    MCAPI class BlockPos _absolutePos(class BlockPos const&) const;
    /**
     * @symbol ?_absoluteVec\@BaseGameTestHelper\@gametest\@\@IEBA?AVVec3\@\@AEBV3\@\@Z
     */
    MCAPI class Vec3 _absoluteVec(class Vec3 const&) const;
    /**
     * @symbol ?_relativeConnectivity\@BaseGameTestHelper\@gametest\@\@IEBAXAEA_N000\@Z
     */
    MCAPI void _relativeConnectivity(bool&, bool&, bool&, bool&) const;
    /**
     * @symbol ?_relativePos\@BaseGameTestHelper\@gametest\@\@IEBA?AVBlockPos\@\@AEBV3\@\@Z
     */
    MCAPI class BlockPos _relativePos(class BlockPos const&) const;
    /**
     * @symbol ?_relativeVec\@BaseGameTestHelper\@gametest\@\@IEBA?AVVec3\@\@AEBV3\@\@Z
     */
    MCAPI class Vec3 _relativeVec(class Vec3 const&) const;
    // NOLINTEND
};

}; // namespace gametest
