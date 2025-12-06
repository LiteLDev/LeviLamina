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
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BedrockTextureData const>>              mColorTextureDataWeakPtr;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MolangClientTextureSet::ExtraPBRData>> mPBRData;
    ::ll::TypedStorage<8, 48, ::HashedString>                                           mName;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangClientTextureSet();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MolangClientTextureSet(::MolangClientTextureSet const& rhs);

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
        ::std::optional<::MERSUniformData> const& uniformData,
        bool                                      hasMERS,
        bool                                      hasNormals
    );

    MCNAPI ::std::unique_ptr<::MolangClientTextureSet::ExtraPBRData> _clonePBRData() const;

    MCNAPI ::mce::ClientTexture const& getClientTexture() const;

    MCNAPI ::MolangClientTextureSet& operator=(::MolangClientTextureSet&& rhs);

    MCNAPI ::MolangClientTextureSet& operator=(::MolangClientTextureSet const& rhs);

    MCNAPI ~MolangClientTextureSet();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MolangClientTextureSet const& getDefaultErrorValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MolangClientTextureSet const& rhs);

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
        ::std::optional<::MERSUniformData> const& uniformData,
        bool                                      hasMERS,
        bool                                      hasNormals
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
