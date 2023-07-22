/**
 * @file  BannerPattern.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BannerPattern.
 *
 */
class BannerPattern {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERPATTERN
public:
    class BannerPattern& operator=(class BannerPattern const &) = delete;
    BannerPattern(class BannerPattern const &) = delete;
    BannerPattern() = delete;
#endif

public:
    /**
     * @symbol  ?getIgnoreAux\@BannerPattern\@\@QEBA_NXZ
     */
    MCAPI bool getIgnoreAux() const;
    /**
     * @symbol  ?getIngredientItem\@BannerPattern\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const & getIngredientItem() const;
    /**
     * @symbol  ?getName\@BannerPattern\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol  ?getNameID\@BannerPattern\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getNameID() const;
    /**
     * @symbol  ?getPattern\@BannerPattern\@\@QEBAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> const & getPattern() const;
    /**
     * @symbol  ?hasPattern\@BannerPattern\@\@QEBA_NXZ
     */
    MCAPI bool hasPattern() const;
    /**
     * @symbol  ?matchesPatternItem\@BannerPattern\@\@QEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI bool matchesPatternItem(class ItemStackBase const &) const;
    /**
     * @symbol  ?requiresIngredientItem\@BannerPattern\@\@QEBA_NXZ
     */
    MCAPI bool requiresIngredientItem() const;
    /**
     * @symbol  ?requiresPatternItem\@BannerPattern\@\@QEBA_NXZ
     */
    MCAPI bool requiresPatternItem() const;
    /**
     * @symbol  ?findPatternIndexByNameID\@BannerPattern\@\@SA?AV?$optional\@E\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static class std::optional<unsigned char> findPatternIndexByNameID(std::string const &);
    /**
     * @symbol  ?getPatternIndexFromName\@BannerPattern\@\@SA?AV?$optional\@E\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static class std::optional<unsigned char> getPatternIndexFromName(std::string const &);
    /**
     * @symbol  ?getPatternIndexFromNameID\@BannerPattern\@\@SAEAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static unsigned char getPatternIndexFromNameID(std::string const &);
    /**
     * @symbol  ?initPatterns\@BannerPattern\@\@SAXXZ
     */
    MCAPI static void initPatterns();
    /**
     * @symbol  ?mBase\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mBase;
    /**
     * @symbol  ?mBorder\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mBorder;
    /**
     * @symbol  ?mBricks\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mBricks;
    /**
     * @symbol  ?mCircle\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mCircle;
    /**
     * @symbol  ?mCreeper\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mCreeper;
    /**
     * @symbol  ?mCross\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mCross;
    /**
     * @symbol  ?mCurlyBorder\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mCurlyBorder;
    /**
     * @symbol  ?mDiagonalLeft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mDiagonalLeft;
    /**
     * @symbol  ?mDiagonalRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mDiagonalRight;
    /**
     * @symbol  ?mDiagonalUpLeft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mDiagonalUpLeft;
    /**
     * @symbol  ?mDiagonalUpRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mDiagonalUpRight;
    /**
     * @symbol  ?mFlower\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mFlower;
    /**
     * @symbol  ?mGlobe\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mGlobe;
    /**
     * @symbol  ?mGradient\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mGradient;
    /**
     * @symbol  ?mGradientUp\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mGradientUp;
    /**
     * @symbol  ?mHalfHorizontal\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mHalfHorizontal;
    /**
     * @symbol  ?mHalfHorizontalBottom\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mHalfHorizontalBottom;
    /**
     * @symbol  ?mHalfVertical\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mHalfVertical;
    /**
     * @symbol  ?mHalfVerticalRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mHalfVerticalRight;
    /**
     * @symbol  ?mMojang\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mMojang;
    /**
     * @symbol  ?mPatterns\@BannerPattern\@\@2V?$vector\@V?$unique_ptr\@VBannerPattern\@\@U?$default_delete\@VBannerPattern\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VBannerPattern\@\@U?$default_delete\@VBannerPattern\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::unique_ptr<class BannerPattern>> mPatterns;
    /**
     * @symbol  ?mPiglin\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mPiglin;
    /**
     * @symbol  ?mRhombus\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mRhombus;
    /**
     * @symbol  ?mSkull\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mSkull;
    /**
     * @symbol  ?mSmallStripes\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mSmallStripes;
    /**
     * @symbol  ?mSquareBottomLeft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mSquareBottomLeft;
    /**
     * @symbol  ?mSquareBottomRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mSquareBottomRight;
    /**
     * @symbol  ?mSquareTopLeft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mSquareTopLeft;
    /**
     * @symbol  ?mSquareTopRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mSquareTopRight;
    /**
     * @symbol  ?mStraightCross\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStraightCross;
    /**
     * @symbol  ?mStripeBottom\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStripeBottom;
    /**
     * @symbol  ?mStripeCenter\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStripeCenter;
    /**
     * @symbol  ?mStripeDownleft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStripeDownleft;
    /**
     * @symbol  ?mStripeDownright\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStripeDownright;
    /**
     * @symbol  ?mStripeLeft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStripeLeft;
    /**
     * @symbol  ?mStripeMiddle\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStripeMiddle;
    /**
     * @symbol  ?mStripeRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStripeRight;
    /**
     * @symbol  ?mStripeTop\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStripeTop;
    /**
     * @symbol  ?mTriangleBottom\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mTriangleBottom;
    /**
     * @symbol  ?mTriangleTop\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mTriangleTop;
    /**
     * @symbol  ?mTrianglesBottom\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mTrianglesBottom;
    /**
     * @symbol  ?mTrianglesTop\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mTrianglesTop;

};