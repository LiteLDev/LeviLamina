#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SkinRepository {
public:
    // SkinRepository inner types declare
    // clang-format off
    struct SkinPackEntry;
    struct LoadListener;
    // clang-format on

    // SkinRepository inner types define
    enum class SkinPackLoadState : uchar {};

    enum class EntryDisposition : uchar {};

    struct SkinPackEntry {};

    struct LoadListener {};
};
