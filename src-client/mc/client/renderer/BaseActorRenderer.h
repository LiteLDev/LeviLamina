#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/ActorShaderManager.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class Quaternion;
class Tessellator;
class Vec3;
struct NameTagRenderObject;
namespace mce { class Color; }
namespace mce { class Mesh; }
// clang-format on

class BaseActorRenderer : public ::ActorShaderManager {
public:
    // BaseActorRenderer inner types define
    using NameplateBackgroundInfo = ::std::variant<::std::shared_ptr<::mce::Mesh>, int>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mNameTagBackgroundMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mNameTagBackgroundWithBackfaceMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mNameTagTextMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mNameTagTextWithBackfaceMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDepthTestedNameTagMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDepthTestedNameTagWithBackfaceMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDepthTestedNameTextMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDepthTestedNameTextWithBackfaceMat;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseActorRenderer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseActorRenderer();

    MCAPI ::std::vector<::NameTagRenderObject> extractRenderTextObjects(
        ::Tessellator&                       tessellator,
        ::std::string const&                 str,
        ::std::vector<int> const&            widths,
        ::Vec3 const&                        pos,
        ::mce::Color const&                  color,
        float                                scale,
        ::std::optional<::Quaternion> const& rotation,
        ::std::optional<::mce::Color> const& backgroundColor,
        bool                                 depthTest,
        bool                                 showBackface,
        bool                                 showTextBackface
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::NameTagRenderObject _extractRenderTextObject(
        ::Tessellator&                       tessellator,
        ::std::string const&                 str,
        ::std::vector<int> const&            widths,
        ::Vec3 const&                        pos,
        ::mce::Color const&                  textColor,
        ::mce::MaterialPtr const*            tagMatOverride,
        ::mce::MaterialPtr const*            textMatOverride,
        ::mce::Color const&                  tagColor,
        float                                scale,
        ::std::optional<::Quaternion> const& rotation
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::Color const& NAME_TAG_BACKGROUND_COLOR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
