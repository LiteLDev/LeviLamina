#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec4: public float4 {

public:
    using float4::float4;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?MAX\@Vec4\@\@2V1\@B
     */
    MCAPI static class Vec4 const MAX;
    /**
     * @symbol ?MIN\@Vec4\@\@2V1\@B
     */
    MCAPI static class Vec4 const MIN;
    /**
     * @symbol ?ONE\@Vec4\@\@2V1\@B
     */
    MCAPI static class Vec4 const ONE;
    /**
     * @symbol ?ZERO\@Vec4\@\@2V1\@B
     */
    MCAPI static class Vec4 const ZERO;
    // NOLINTEND
};
