#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/minecraft_renderer/resources/MERSTextureMode.h"
#include "mc/deps/minecraft_renderer/resources/MERSUniformData.h"
#include "mc/deps/minecraft_renderer/resources/NormalTextureMode.h"

// auto generated forward declare list
// clang-format off
struct BedrockTextureData;
namespace mce { class TexturePtr; }
// clang-format on

struct MolangClientTextureSet {
public:
    // MolangClientTextureSet inner types declare
    // clang-format off
    struct ExtraPBRData;
    // clang-format on

    // MolangClientTextureSet inner types define
    struct ExtraPBRData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BedrockTextureData const>> mMERSTextureDataWeakPtr;
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BedrockTextureData const>> mNormalTextureDataWeakPtr;
        ::ll::TypedStorage<4, 20, ::std::optional<::MERSUniformData>>          mMERSUniforms;
        ::ll::TypedStorage<1, 1, ::MERSTextureMode>                            mMERSTextureMode;
        ::ll::TypedStorage<1, 1, ::NormalTextureMode>                          mNormalTextureMode;
        // NOLINTEND
    };

public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::TypedStorage<8, 48, ::HashedString> mData;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BedrockTextureData const>>              mColorTextureDataWeakPtr;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MolangClientTextureSet::ExtraPBRData>> mPBRData;
    ::ll::TypedStorage<8, 48, ::HashedString>                                           mName;
#endif
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    MolangClientTextureSet& operator=(MolangClientTextureSet const&);
    MolangClientTextureSet();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit MolangClientTextureSet(::HashedString const& name);

    MCAPI MolangClientTextureSet(::MolangClientTextureSet const& rhs);

    MCNAPI MolangClientTextureSet(::HashedString const& name, ::mce::TexturePtr colorTexturePtr);

    MCNAPI MolangClientTextureSet(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr
    );

    MCNAPI MolangClientTextureSet(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr,
        ::mce::TexturePtr     normalTexturePtr
    );

    MCNAPI MolangClientTextureSet(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr,
        ::MERSTextureMode     mersTextureMode,
        ::mce::TexturePtr     normalTexturePtr,
        ::NormalTextureMode   normalTextureMode
    );

    MCNAPI MolangClientTextureSet(
        ::HashedString const&                     name,
        ::mce::TexturePtr                         colorTexturePtr,
        ::mce::TexturePtr                         mersTexturePtr,
        ::MERSTextureMode                         mersTextureMode,
        ::mce::TexturePtr                         normalTexturePtr,
        ::NormalTextureMode                       normalTextureMode,
        ::std::optional<::MERSUniformData> const& uniformData
    );

    MCAPI ~MolangClientTextureSet();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::HashedString const& name);

    MCAPI void* $ctor(::MolangClientTextureSet const& rhs);

    MCNAPI void* $ctor(::HashedString const& name, ::mce::TexturePtr colorTexturePtr);

    MCNAPI void* $ctor(::HashedString const& name, ::mce::TexturePtr colorTexturePtr, ::mce::TexturePtr mersTexturePtr);

    MCNAPI void* $ctor(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr,
        ::mce::TexturePtr     normalTexturePtr
    );

    MCNAPI void* $ctor(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr,
        ::MERSTextureMode     mersTextureMode,
        ::mce::TexturePtr     normalTexturePtr,
        ::NormalTextureMode   normalTextureMode
    );

    MCNAPI void* $ctor(
        ::HashedString const&                     name,
        ::mce::TexturePtr                         colorTexturePtr,
        ::mce::TexturePtr                         mersTexturePtr,
        ::MERSTextureMode                         mersTextureMode,
        ::mce::TexturePtr                         normalTexturePtr,
        ::NormalTextureMode                       normalTextureMode,
        ::std::optional<::MERSUniformData> const& uniformData
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
