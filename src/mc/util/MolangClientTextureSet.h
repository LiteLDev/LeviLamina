#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/minecraft_renderer/resources/MERSTextureMode.h"
#include "mc/deps/minecraft_renderer/resources/NormalTextureMode.h"

// auto generated forward declare list
// clang-format off
struct BedrockTextureData;
struct MERSUniformData;
namespace mce { class TexturePtr; }
namespace mce { struct ClientTexture; }
// clang-format on

struct MolangClientTextureSet {
public:
    // MolangClientTextureSet inner types declare
    // clang-format off
    struct ExtraPBRData;
    // clang-format on

    // MolangClientTextureSet inner types define
    struct ExtraPBRData {};

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

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI MolangClientTextureSet();

    MCAPI explicit MolangClientTextureSet(::HashedString const& name);

    MCAPI MolangClientTextureSet(::MolangClientTextureSet const& rhs);

    MCAPI MolangClientTextureSet(::HashedString const& name, ::mce::TexturePtr colorTexturePtr);

    MCAPI MolangClientTextureSet(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr
    );

    MCAPI MolangClientTextureSet(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr,
        ::mce::TexturePtr     normalTexturePtr
    );

    MCAPI MolangClientTextureSet(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr,
        ::MERSTextureMode     mersTextureMode,
        ::mce::TexturePtr     normalTexturePtr,
        ::NormalTextureMode   normalTextureMode
    );

    MCAPI MolangClientTextureSet(
        ::HashedString const&                     name,
        ::mce::TexturePtr                         colorTexturePtr,
        ::mce::TexturePtr                         mersTexturePtr,
        ::MERSTextureMode                         mersTextureMode,
        ::mce::TexturePtr                         normalTexturePtr,
        ::NormalTextureMode                       normalTextureMode,
        ::std::optional<::MERSUniformData> const& uniformData
    );

    MCAPI ::mce::ClientTexture const& getClientMERSTexture() const;

    MCAPI ::MERSTextureMode getClientMERSTextureMode() const;

    MCAPI ::mce::ClientTexture const& getClientNormalTexture() const;

    MCAPI ::NormalTextureMode getClientNormalTextureMode() const;

    MCAPI ::mce::ClientTexture const& getClientTexture() const;

    MCAPI ::std::optional<::MERSUniformData> getMERSUniforms() const;

    MCAPI ::MolangClientTextureSet& operator=(::MolangClientTextureSet&& rhs);

    MCAPI ::MolangClientTextureSet& operator=(::MolangClientTextureSet const& rhs);

    MCAPI ~MolangClientTextureSet();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();

    MCAPI void* $ctor(::HashedString const& name);

    MCAPI void* $ctor(::MolangClientTextureSet const& rhs);

    MCAPI void* $ctor(::HashedString const& name, ::mce::TexturePtr colorTexturePtr);

    MCAPI void* $ctor(::HashedString const& name, ::mce::TexturePtr colorTexturePtr, ::mce::TexturePtr mersTexturePtr);

    MCAPI void* $ctor(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr,
        ::mce::TexturePtr     normalTexturePtr
    );

    MCAPI void* $ctor(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr,
        ::MERSTextureMode     mersTextureMode,
        ::mce::TexturePtr     normalTexturePtr,
        ::NormalTextureMode   normalTextureMode
    );

    MCAPI void* $ctor(
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
