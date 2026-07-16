#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace cereal {

struct MetaVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx const>> mCtx;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MetaVisitor();

    virtual void log(::std::string msg) = 0;

    virtual bool hasErrors() const = 0;

    virtual void onSequenceContainer(uint64 index, ::std::function<bool()> cb) = 0;

    virtual void onAssociativeContainer(::std::string_view key, ::std::function<bool()> cb) = 0;

    virtual void onAssociativeContainer(uint64 index, ::std::function<bool()> cb) = 0;

    virtual void onSetter(::std::function<bool()> cb) = 0;

    virtual void onMetaType(::std::function<bool()> setters, ::std::function<void()> members) = 0;

    virtual void onMetaData(
        ::std::string_view                                                                                key,
        uint                                                                                              id,
        ::entt::meta_data                                                                                 data,
        ::entt::meta_any                                                                                  from,
        ::entt::meta_any                                                                                  to,
        ::std::function<void(::entt::meta_data, ::entt::meta_any&, ::entt::meta_data, ::entt::meta_any&)> cb
    ) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
