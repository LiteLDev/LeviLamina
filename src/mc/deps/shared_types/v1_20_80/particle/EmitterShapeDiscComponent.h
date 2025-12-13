#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/EmitterShapeSphereComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct EmitterShapeDiscComponent : public ::SharedTypes::v1_20_80::EmitterShapeSphereComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnk70afc7;
    // NOLINTEND

public:
    // prevent constructor by default
    EmitterShapeDiscComponent& operator=(EmitterShapeDiscComponent const&);
    EmitterShapeDiscComponent(EmitterShapeDiscComponent const&);
    EmitterShapeDiscComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HashedString const& getIdentifier() const /*override*/;

    virtual ~EmitterShapeDiscComponent() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::HashedString const& $getIdentifier() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
