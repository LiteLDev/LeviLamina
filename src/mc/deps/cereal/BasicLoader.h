#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicContextOwner.h"
#include "mc/deps/cereal/SerializerContext.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct SchemaReader; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal {

class BasicLoader : public ::cereal::BasicContextOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkab84fe;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicLoader& operator=(BasicLoader const&);
    BasicLoader(BasicLoader const&);
    BasicLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BasicLoader();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::std::string> getErrors() const;

    MCAPI ::std::vector<::cereal::SerializerContext::LogEntry> const& getLog() const;

    MCAPI bool loadImpl(
        ::cereal::SchemaReader&                reader,
        ::entt::meta_handle                    handle,
        ::entt::meta_any const&                loadContext,
        ::cereal::internal::BasicSchema const& fallback
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
