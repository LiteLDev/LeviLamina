#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BannerPattern {

public:
    // prevent constructor by default
    BannerPattern& operator=(BannerPattern const&) = delete;
    BannerPattern(BannerPattern const&)            = delete;
    BannerPattern()                                = delete;

public:
    /**
     * @symbol
     * ??0BannerPattern\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0VItemStack\@\@F_N\@Z
     */
    MCAPI BannerPattern(std::string const&, std::string const&, class ItemStack, short, bool); // NOLINT
    /**
     * @symbol ?getIgnoreAux\@BannerPattern\@\@QEBA_NXZ
     */
    MCAPI bool getIgnoreAux() const; // NOLINT
    /**
     * @symbol ?getIngredientItem\@BannerPattern\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const& getIngredientItem() const; // NOLINT
    /**
     * @symbol
     * ?getName\@BannerPattern\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getName() const; // NOLINT
    /**
     * @symbol
     * ?getNameID\@BannerPattern\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getNameID() const; // NOLINT
    /**
     * @symbol
     * ?getPattern\@BannerPattern\@\@QEBAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> const& getPattern() const; // NOLINT
    /**
     * @symbol ?hasPattern\@BannerPattern\@\@QEBA_NXZ
     */
    MCAPI bool hasPattern() const; // NOLINT
    /**
     * @symbol ?matchesPatternItem\@BannerPattern\@\@QEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI bool matchesPatternItem(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ?requiresIngredientItem\@BannerPattern\@\@QEBA_NXZ
     */
    MCAPI bool requiresIngredientItem() const; // NOLINT
    /**
     * @symbol ?requiresPatternItem\@BannerPattern\@\@QEBA_NXZ
     */
    MCAPI bool requiresPatternItem() const; // NOLINT
    /**
     * @symbol
     * ?findPatternIndexByNameID\@BannerPattern\@\@SA?AV?$optional\@E\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static class std::optional<unsigned char> findPatternIndexByNameID(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getPatternIndexFromName\@BannerPattern\@\@SA?AV?$optional\@E\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static class std::optional<unsigned char> getPatternIndexFromName(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getPatternIndexFromNameID\@BannerPattern\@\@SAEAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static unsigned char getPatternIndexFromNameID(std::string const&); // NOLINT
    /**
     * @symbol ?initPatterns\@BannerPattern\@\@SAXXZ
     */
    MCAPI static void initPatterns(); // NOLINT
    /**
     * @symbol ?tryGetPatternDataFromTag\@BannerPattern\@\@SAPEBVCompoundTag\@\@PEBVTag\@\@\@Z
     */
    MCAPI static class CompoundTag const* tryGetPatternDataFromTag(class Tag const*); // NOLINT
    /**
     * @symbol ?mBase\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mBase; // NOLINT
    /**
     * @symbol ?mBorder\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mBorder; // NOLINT
    /**
     * @symbol ?mBricks\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mBricks; // NOLINT
    /**
     * @symbol ?mCircle\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mCircle; // NOLINT
    /**
     * @symbol ?mCreeper\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mCreeper; // NOLINT
    /**
     * @symbol ?mCross\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mCross; // NOLINT
    /**
     * @symbol ?mCurlyBorder\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mCurlyBorder; // NOLINT
    /**
     * @symbol ?mDiagonalLeft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mDiagonalLeft; // NOLINT
    /**
     * @symbol ?mDiagonalRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mDiagonalRight; // NOLINT
    /**
     * @symbol ?mDiagonalUpLeft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mDiagonalUpLeft; // NOLINT
    /**
     * @symbol ?mDiagonalUpRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mDiagonalUpRight; // NOLINT
    /**
     * @symbol ?mFlower\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mFlower; // NOLINT
    /**
     * @symbol ?mGlobe\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mGlobe; // NOLINT
    /**
     * @symbol ?mGradient\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mGradient; // NOLINT
    /**
     * @symbol ?mGradientUp\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mGradientUp; // NOLINT
    /**
     * @symbol ?mHalfHorizontal\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mHalfHorizontal; // NOLINT
    /**
     * @symbol ?mHalfHorizontalBottom\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mHalfHorizontalBottom; // NOLINT
    /**
     * @symbol ?mHalfVertical\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mHalfVertical; // NOLINT
    /**
     * @symbol ?mHalfVerticalRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mHalfVerticalRight; // NOLINT
    /**
     * @symbol ?mIllager\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mIllager; // NOLINT
    /**
     * @symbol ?mMojang\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mMojang; // NOLINT
    /**
     * @symbol
     * ?mPatterns\@BannerPattern\@\@2V?$vector\@V?$unique_ptr\@VBannerPattern\@\@U?$default_delete\@VBannerPattern\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VBannerPattern\@\@U?$default_delete\@VBannerPattern\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::unique_ptr<class BannerPattern>> mPatterns; // NOLINT
    /**
     * @symbol ?mPiglin\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mPiglin; // NOLINT
    /**
     * @symbol ?mRhombus\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mRhombus; // NOLINT
    /**
     * @symbol ?mSkull\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mSkull; // NOLINT
    /**
     * @symbol ?mSmallStripes\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mSmallStripes; // NOLINT
    /**
     * @symbol ?mSquareBottomLeft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mSquareBottomLeft; // NOLINT
    /**
     * @symbol ?mSquareBottomRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mSquareBottomRight; // NOLINT
    /**
     * @symbol ?mSquareTopLeft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mSquareTopLeft; // NOLINT
    /**
     * @symbol ?mSquareTopRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mSquareTopRight; // NOLINT
    /**
     * @symbol ?mStraightCross\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mStraightCross; // NOLINT
    /**
     * @symbol ?mStripeBottom\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mStripeBottom; // NOLINT
    /**
     * @symbol ?mStripeCenter\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mStripeCenter; // NOLINT
    /**
     * @symbol ?mStripeDownleft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mStripeDownleft; // NOLINT
    /**
     * @symbol ?mStripeDownright\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mStripeDownright; // NOLINT
    /**
     * @symbol ?mStripeLeft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mStripeLeft; // NOLINT
    /**
     * @symbol ?mStripeMiddle\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mStripeMiddle; // NOLINT
    /**
     * @symbol ?mStripeRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mStripeRight; // NOLINT
    /**
     * @symbol ?mStripeTop\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mStripeTop; // NOLINT
    /**
     * @symbol ?mTriangleBottom\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mTriangleBottom; // NOLINT
    /**
     * @symbol ?mTriangleTop\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mTriangleTop; // NOLINT
    /**
     * @symbol ?mTrianglesBottom\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mTrianglesBottom; // NOLINT
    /**
     * @symbol ?mTrianglesTop\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern* mTrianglesTop; // NOLINT
};
