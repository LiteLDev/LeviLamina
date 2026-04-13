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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    MolangClientTextureSet& operator=(MolangClientTextureSet const&);
    MolangClientTextureSet(MolangClientTextureSet const&);
    MolangClientTextureSet();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    MolangClientTextureSet();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
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

    MCAPI ::std::unique_ptr<::MolangClientTextureSet::ExtraPBRData> _clonePBRData() const;

    MCAPI ::mce::ClientTexture const& getClientTexture() const;
#endif

    MCAPI ::MolangClientTextureSet& operator=(::MolangClientTextureSet&& rhs);

#ifdef LL_PLAT_C
    MCAPI ::MolangClientTextureSet& operator=(::MolangClientTextureSet const& rhs);

    MCAPI ~MolangClientTextureSet();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::MolangClientTextureSet const& getDefaultErrorValue();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
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
