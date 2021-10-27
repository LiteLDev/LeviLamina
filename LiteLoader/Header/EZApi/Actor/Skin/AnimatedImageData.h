#pragma once

#include "../../Core/mce.h"
#include "persona.h"

class AnimatedImageData {
public:
    AnimatedTextureType type;
    mce::Image          image;
    float               frame;

    inline AnimatedImageData(AnimatedTextureType type, mce::Image const& image, float frame)
        : type(type)
        , image(image.clone())
        , frame(frame) {
    }

    inline AnimatedImageData& operator=(AnimatedImageData const& rhs) {
        type  = rhs.type;
        image = rhs.image.clone();
        frame = rhs.frame;
        return *this;
    }
};

static_assert(offsetof(AnimatedImageData, frame) == 48);