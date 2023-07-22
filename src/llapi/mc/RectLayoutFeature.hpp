/**
 * @file  RectLayoutFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RectLayoutFeature.
 *
 */
class RectLayoutFeature {

#define AFTER_EXTRA
// Add Member There
public:
struct FeatureArea {
    FeatureArea() = delete;
    FeatureArea(FeatureArea const&) = delete;
    FeatureArea(FeatureArea const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECTLAYOUTFEATURE
public:
    class RectLayoutFeature& operator=(class RectLayoutFeature const &) = delete;
    RectLayoutFeature(class RectLayoutFeature const &) = delete;
    RectLayoutFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RectLayoutFeature();
    /**
     * @vftbl  1
     * @symbol  ?place\@RectLayoutFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;

//private:
    /**
     * @symbol  ?_tryPlaceFeature\@RectLayoutFeature\@\@AEBA?AV?$optional\@UFeatureArea\@RectLayoutFeature\@\@\@std\@\@AEBVVec2\@\@HAEBV?$array\@V?$array\@E$0BA\@\@std\@\@$0BA\@\@3\@\@Z
     */
    MCAPI class std::optional<struct RectLayoutFeature::FeatureArea> _tryPlaceFeature(class Vec2 const &, int, class std::array<class std::array<unsigned char, 16>, 16> const &) const;

private:

};