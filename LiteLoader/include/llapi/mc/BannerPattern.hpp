/**
 * @file  BannerPattern.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -516615192
     * @symbol  ?getIgnoreAux\@BannerPattern\@\@QEBA_NXZ
     */
    MCAPI bool getIgnoreAux() const;
    /**
     * @hash   814791036
     * @symbol  ?getIngredientItem\@BannerPattern\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const & getIngredientItem() const;
    /**
     * @hash   -5987600
     * @symbol  ?getName\@BannerPattern\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @hash   1198268822
     * @symbol  ?getNameID\@BannerPattern\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getNameID() const;
    /**
     * @hash   -516014119
     * @symbol  ?getPattern\@BannerPattern\@\@QEBAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> const & getPattern() const;
    /**
     * @hash   -870450424
     * @symbol  ?hasPattern\@BannerPattern\@\@QEBA_NXZ
     */
    MCAPI bool hasPattern() const;
    /**
     * @hash   -16553409
     * @symbol  ?matchesPatternItem\@BannerPattern\@\@QEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI bool matchesPatternItem(class ItemStackBase const &) const;
    /**
     * @hash   1157491112
     * @symbol  ?requiresIngredientItem\@BannerPattern\@\@QEBA_NXZ
     */
    MCAPI bool requiresIngredientItem() const;
    /**
     * @hash   -1800903290
     * @symbol  ?requiresPatternItem\@BannerPattern\@\@QEBA_NXZ
     */
    MCAPI bool requiresPatternItem() const;
    /**
     * @hash   -309630776
     * @symbol  ?findPatternIndexByNameID\@BannerPattern\@\@SA?AV?$optional\@E\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static class std::optional<unsigned char> findPatternIndexByNameID(std::string const &);
    /**
     * @hash   673182986
     * @symbol  ?getPatternIndexFromName\@BannerPattern\@\@SA?AV?$optional\@E\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static class std::optional<unsigned char> getPatternIndexFromName(std::string const &);
    /**
     * @hash   1363154508
     * @symbol  ?getPatternIndexFromNameID\@BannerPattern\@\@SAEAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static unsigned char getPatternIndexFromNameID(std::string const &);
    /**
     * @hash   -428148073
     * @symbol  ?initPatterns\@BannerPattern\@\@SAXXZ
     */
    MCAPI static void initPatterns();
    /**
     * @hash   273225514
     * @symbol  ?mBase\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mBase;
    /**
     * @hash   1458420712
     * @symbol  ?mBorder\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mBorder;
    /**
     * @hash   801450940
     * @symbol  ?mBricks\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mBricks;
    /**
     * @hash   905335360
     * @symbol  ?mCircle\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mCircle;
    /**
     * @hash   -1407826066
     * @symbol  ?mCreeper\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mCreeper;
    /**
     * @hash   -1482093350
     * @symbol  ?mCross\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mCross;
    /**
     * @hash   793320852
     * @symbol  ?mCurlyBorder\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mCurlyBorder;
    /**
     * @hash   -1848522952
     * @symbol  ?mDiagonalLeft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mDiagonalLeft;
    /**
     * @hash   -996122368
     * @symbol  ?mDiagonalRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mDiagonalRight;
    /**
     * @hash   53104446
     * @symbol  ?mDiagonalUpLeft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mDiagonalUpLeft;
    /**
     * @hash   2119290842
     * @symbol  ?mDiagonalUpRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mDiagonalUpRight;
    /**
     * @hash   296278102
     * @symbol  ?mFlower\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mFlower;
    /**
     * @hash   -1695097204
     * @symbol  ?mGlobe\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mGlobe;
    /**
     * @hash   737819272
     * @symbol  ?mGradient\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mGradient;
    /**
     * @hash   818592262
     * @symbol  ?mGradientUp\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mGradientUp;
    /**
     * @hash   -598076634
     * @symbol  ?mHalfHorizontal\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mHalfHorizontal;
    /**
     * @hash   1065002436
     * @symbol  ?mHalfHorizontalBottom\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mHalfHorizontalBottom;
    /**
     * @hash   1336413850
     * @symbol  ?mHalfVertical\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mHalfVertical;
    /**
     * @hash   -610840672
     * @symbol  ?mHalfVerticalRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mHalfVerticalRight;
    /**
     * @hash   1622628156
     * @symbol  ?mMojang\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mMojang;
    /**
     * @hash   440083396
     * @symbol  ?mPatterns\@BannerPattern\@\@2V?$vector\@V?$unique_ptr\@VBannerPattern\@\@U?$default_delete\@VBannerPattern\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VBannerPattern\@\@U?$default_delete\@VBannerPattern\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::unique_ptr<class BannerPattern>> mPatterns;
    /**
     * @hash   -2034359546
     * @symbol  ?mPiglin\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mPiglin;
    /**
     * @hash   56358242
     * @symbol  ?mRhombus\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mRhombus;
    /**
     * @hash   1621023948
     * @symbol  ?mSkull\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mSkull;
    /**
     * @hash   38915630
     * @symbol  ?mSmallStripes\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mSmallStripes;
    /**
     * @hash   -1378043690
     * @symbol  ?mSquareBottomLeft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mSquareBottomLeft;
    /**
     * @hash   700373266
     * @symbol  ?mSquareBottomRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mSquareBottomRight;
    /**
     * @hash   1454399472
     * @symbol  ?mSquareTopLeft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mSquareTopLeft;
    /**
     * @hash   -1688663208
     * @symbol  ?mSquareTopRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mSquareTopRight;
    /**
     * @hash   -755226034
     * @symbol  ?mStraightCross\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStraightCross;
    /**
     * @hash   -370354992
     * @symbol  ?mStripeBottom\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStripeBottom;
    /**
     * @hash   -51351124
     * @symbol  ?mStripeCenter\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStripeCenter;
    /**
     * @hash   317542940
     * @symbol  ?mStripeDownleft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStripeDownleft;
    /**
     * @hash   1722336764
     * @symbol  ?mStripeDownright\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStripeDownright;
    /**
     * @hash   -735551256
     * @symbol  ?mStripeLeft\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStripeLeft;
    /**
     * @hash   1028543564
     * @symbol  ?mStripeMiddle\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStripeMiddle;
    /**
     * @hash   -859265832
     * @symbol  ?mStripeRight\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStripeRight;
    /**
     * @hash   2042109522
     * @symbol  ?mStripeTop\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mStripeTop;
    /**
     * @hash   -609182714
     * @symbol  ?mTriangleBottom\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mTriangleBottom;
    /**
     * @hash   -2058365140
     * @symbol  ?mTriangleTop\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mTriangleTop;
    /**
     * @hash   -1370573946
     * @symbol  ?mTrianglesBottom\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mTrianglesBottom;
    /**
     * @hash   -2000851508
     * @symbol  ?mTrianglesTop\@BannerPattern\@\@2PEAV1\@EA
     */
    MCAPI static class BannerPattern * mTrianglesTop;

};