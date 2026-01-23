#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/minecraft_renderer/resources/MERSTextureMode.h"
#include "mc/deps/minecraft_renderer/resources/NormalTextureMode.h"

// auto generated forward declare list
// clang-format off
struct MERSUniformData;
namespace mce { class TexturePtr; }
struct BedrockTextureData;
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
    // prevent constructor by default
    MolangClientTextureSet();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C MolangClientTextureSet(::MolangClientTextureSet const& rhs);

    MCNAPI_C MolangClientTextureSet(::HashedString const& name, ::mce::TexturePtr colorTexturePtr);

    MCNAPI_C MolangClientTextureSet(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr
    );

    MCNAPI_C MolangClientTextureSet(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr,
        ::mce::TexturePtr     normalTexturePtr
    );

    MCNAPI_C MolangClientTextureSet(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr,
        ::MERSTextureMode     mersTextureMode,
        ::mce::TexturePtr     normalTexturePtr,
        ::NormalTextureMode   normalTextureMode
    );

    MCNAPI_C MolangClientTextureSet(
        ::HashedString const&                     name,
        ::mce::TexturePtr                         colorTexturePtr,
        ::mce::TexturePtr                         mersTexturePtr,
        ::MERSTextureMode                         mersTextureMode,
        ::mce::TexturePtr                         normalTexturePtr,
        ::NormalTextureMode                       normalTextureMode,
        ::std::optional<::MERSUniformData> const& uniformData,
        bool                                      hasMERS,
        bool                                      hasNormals
    );

    MCNAPI_C ::std::unique_ptr<::MolangClientTextureSet::ExtraPBRData> _clonePBRData() const;

    MCNAPI_C ::mce::ClientTexture const& getClientTexture() const;

    MCNAPI ::MolangClientTextureSet& operator=(::MolangClientTextureSet&& rhs);

    MCNAPI_C ::MolangClientTextureSet& operator=(::MolangClientTextureSet const& rhs);

    MCNAPI_C ~MolangClientTextureSet();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::MolangClientTextureSet const& getDefaultErrorValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::MolangClientTextureSet const& rhs);

    MCNAPI_C void* $ctor(::HashedString const& name, ::mce::TexturePtr colorTexturePtr);

    MCNAPI_C void*
    $ctor(::HashedString const& name, ::mce::TexturePtr colorTexturePtr, ::mce::TexturePtr mersTexturePtr);

    MCNAPI_C void* $ctor(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr,
        ::mce::TexturePtr     normalTexturePtr
    );

    MCNAPI_C void* $ctor(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr,
        ::MERSTextureMode     mersTextureMode,
        ::mce::TexturePtr     normalTexturePtr,
        ::NormalTextureMode   normalTextureMode
    );

    MCNAPI_C void* $ctor(
        ::HashedString const&                     name,
        ::mce::TexturePtr                         colorTexturePtr,
        ::mce::TexturePtr                         mersTexturePtr,
        ::MERSTextureMode                         mersTextureMode,
        ::mce::TexturePtr                         normalTexturePtr,
        ::NormalTextureMode                       normalTextureMode,
        ::std::optional<::MERSUniformData> const& uniformData,
        bool                                      hasMERS,
        bool                                      hasNormals
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
