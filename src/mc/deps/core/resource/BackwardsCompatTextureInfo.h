#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BackwardsCompatTextureInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk96efec;
    ::ll::UntypedStorage<4, 8>  mUnk2ac2dd;
    ::ll::UntypedStorage<4, 8>  mUnkacd42c;
    ::ll::UntypedStorage<4, 8>  mUnke0f3bc;
    ::ll::UntypedStorage<8, 32> mUnka19104;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    BackwardsCompatTextureInfo& operator=(BackwardsCompatTextureInfo const&);
    BackwardsCompatTextureInfo(BackwardsCompatTextureInfo const&);
    BackwardsCompatTextureInfo();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    BackwardsCompatTextureInfo& operator=(BackwardsCompatTextureInfo const&);
    BackwardsCompatTextureInfo(BackwardsCompatTextureInfo const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI BackwardsCompatTextureInfo();

    MCNAPI bool canUse() const;

    MCNAPI ::glm::vec2 const& getBaseUVSize() const;

    MCNAPI ::Core::PathBuffer<::std::string> const& getTexturePath() const;

    MCNAPI ::glm::vec2 const& getUV() const;

    MCNAPI ::glm::vec2 const& getUVSize() const;

    MCNAPI void load(::Json::Value const& value);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND
};
