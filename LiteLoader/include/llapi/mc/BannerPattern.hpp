/**
 * @file  MC/BannerPattern.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1468235832
     * @symbol ?getIgnoreAux@BannerPattern@@QEBA_NXZ
     */
    MCAPI bool getIgnoreAux() const;
    /**
     * @hash   1665360604
     * @symbol ?getIngredientItem@BannerPattern@@QEBAAEBVItemStack@@XZ
     */
    MCAPI class ItemStack const & getIngredientItem() const;
    /**
     * @hash   -1993730784
     * @symbol ?getName@BannerPattern@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @hash   866611494
     * @symbol ?getNameID@BannerPattern@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getNameID() const;
    /**
     * @hash   -622277655
     * @symbol ?getPattern@BannerPattern@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> const & getPattern() const;
    /**
     * @hash   -1822071064
     * @symbol ?hasPattern@BannerPattern@@QEBA_NXZ
     */
    MCAPI bool hasPattern() const;
    /**
     * @hash   -968435441
     * @symbol ?matchesPatternItem@BannerPattern@@QEBA_NAEBVItemStackBase@@@Z
     */
    MCAPI bool matchesPatternItem(class ItemStackBase const &) const;
    /**
     * @hash   205593704
     * @symbol ?requiresIngredientItem@BannerPattern@@QEBA_NXZ
     */
    MCAPI bool requiresIngredientItem() const;
    /**
     * @hash   1542166598
     * @symbol ?requiresPatternItem@BannerPattern@@QEBA_NXZ
     */
    MCAPI bool requiresPatternItem() const;
    /**
     * @hash   -1261251416
     * @symbol ?findPatternIndexByNameID@BannerPattern@@SA?AV?$optional@E@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI static class std::optional<unsigned char> findPatternIndexByNameID(std::string const &);
    /**
     * @hash   -278437654
     * @symbol ?getPatternIndexFromName@BannerPattern@@SA?AV?$optional@E@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI static class std::optional<unsigned char> getPatternIndexFromName(std::string const &);
    /**
     * @hash   411533868
     * @symbol ?getPatternIndexFromNameID@BannerPattern@@SAEAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static unsigned char getPatternIndexFromNameID(std::string const &);
    /**
     * @hash   -1379768713
     * @symbol ?initPatterns@BannerPattern@@SAXXZ
     */
    MCAPI static void initPatterns();
    /**
     * @hash   -598178534
     * @symbol ?mBase@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mBase;
    /**
     * @hash   587016664
     * @symbol ?mBorder@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mBorder;
    /**
     * @hash   -69953108
     * @symbol ?mBricks@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mBricks;
    /**
     * @hash   33931312
     * @symbol ?mCircle@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mCircle;
    /**
     * @hash   2015737182
     * @symbol ?mCreeper@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mCreeper;
    /**
     * @hash   1941469898
     * @symbol ?mCross@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mCross;
    /**
     * @hash   -78083196
     * @symbol ?mCurlyBorder@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mCurlyBorder;
    /**
     * @hash   1575040296
     * @symbol ?mDiagonalLeft@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mDiagonalLeft;
    /**
     * @hash   -1867526416
     * @symbol ?mDiagonalRight@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mDiagonalRight;
    /**
     * @hash   -818299602
     * @symbol ?mDiagonalUpLeft@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mDiagonalUpLeft;
    /**
     * @hash   1247886794
     * @symbol ?mDiagonalUpRight@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mDiagonalUpRight;
    /**
     * @hash   -575125946
     * @symbol ?mFlower@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mFlower;
    /**
     * @hash   1728466044
     * @symbol ?mGlobe@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mGlobe;
    /**
     * @hash   -133584776
     * @symbol ?mGradient@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mGradient;
    /**
     * @hash   -52811786
     * @symbol ?mGradientUp@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mGradientUp;
    /**
     * @hash   -1469480682
     * @symbol ?mHalfHorizontal@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mHalfHorizontal;
    /**
     * @hash   193598388
     * @symbol ?mHalfHorizontalBottom@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mHalfHorizontalBottom;
    /**
     * @hash   465009802
     * @symbol ?mHalfVertical@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mHalfVertical;
    /**
     * @hash   -1482244720
     * @symbol ?mHalfVerticalRight@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mHalfVerticalRight;
    /**
     * @hash   751224108
     * @symbol ?mMojang@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mMojang;
    /**
     * @hash   -431320652
     * @symbol ?mPatterns@BannerPattern@@2V?$vector@V?$unique_ptr@VBannerPattern@@U?$default_delete@VBannerPattern@@@std@@@std@@V?$allocator@V?$unique_ptr@VBannerPattern@@U?$default_delete@VBannerPattern@@@std@@@std@@@2@@std@@A
     */
    MCAPI static std::vector<std::unique_ptr<class BannerPattern>> mPatterns;
    /**
     * @hash   1389203702
     * @symbol ?mPiglin@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mPiglin;
    /**
     * @hash   -815045806
     * @symbol ?mRhombus@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mRhombus;
    /**
     * @hash   749619900
     * @symbol ?mSkull@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mSkull;
    /**
     * @hash   -832488418
     * @symbol ?mSmallStripes@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mSmallStripes;
    /**
     * @hash   2045519558
     * @symbol ?mSquareBottomLeft@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mSquareBottomLeft;
    /**
     * @hash   -171030782
     * @symbol ?mSquareBottomRight@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mSquareBottomRight;
    /**
     * @hash   582995424
     * @symbol ?mSquareTopLeft@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mSquareTopLeft;
    /**
     * @hash   1734900040
     * @symbol ?mSquareTopRight@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mSquareTopRight;
    /**
     * @hash   -1626630082
     * @symbol ?mStraightCross@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mStraightCross;
    /**
     * @hash   -1241759040
     * @symbol ?mStripeBottom@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mStripeBottom;
    /**
     * @hash   -922755172
     * @symbol ?mStripeCenter@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mStripeCenter;
    /**
     * @hash   -553861108
     * @symbol ?mStripeDownleft@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mStripeDownleft;
    /**
     * @hash   850932716
     * @symbol ?mStripeDownright@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mStripeDownright;
    /**
     * @hash   -1606955304
     * @symbol ?mStripeLeft@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mStripeLeft;
    /**
     * @hash   157139516
     * @symbol ?mStripeMiddle@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mStripeMiddle;
    /**
     * @hash   -1730669880
     * @symbol ?mStripeRight@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mStripeRight;
    /**
     * @hash   1170705474
     * @symbol ?mStripeTop@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mStripeTop;
    /**
     * @hash   -1480586762
     * @symbol ?mTriangleBottom@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mTriangleBottom;
    /**
     * @hash   1365198108
     * @symbol ?mTriangleTop@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mTriangleTop;
    /**
     * @hash   2052989302
     * @symbol ?mTrianglesBottom@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mTrianglesBottom;
    /**
     * @hash   1422711740
     * @symbol ?mTrianglesTop@BannerPattern@@2PEAV1@EA
     */
    MCAPI static class BannerPattern * mTrianglesTop;

};