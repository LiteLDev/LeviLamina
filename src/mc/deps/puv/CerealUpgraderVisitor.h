#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/MetaVisitor.h"

namespace Puv::internal {

class CerealUpgraderVisitor : public ::cereal::MetaVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mUnkaade51;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealUpgraderVisitor& operator=(CerealUpgraderVisitor const&);
    CerealUpgraderVisitor(CerealUpgraderVisitor const&);
    CerealUpgraderVisitor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void log(::std::string msg) /*override*/;

    virtual bool hasErrors() const /*override*/;

    virtual void onSequenceContainer(uint64 index, ::std::function<bool()> cb) /*override*/;

    virtual void onAssociativeContainer(::std::string_view key, ::std::function<bool()> cb) /*override*/;

    virtual void onAssociativeContainer(uint64 index, ::std::function<bool()> cb) /*override*/;

    virtual void onSetter(::std::function<bool()> cb) /*override*/;

    virtual void onMetaType(::std::function<bool()> setters, ::std::function<void()> members) /*override*/;

    virtual void onMetaData(
        ::std::string_view                                                                                key,
        uint                                                                                              id,
        ::entt::meta_data                                                                                 data,
        ::entt::meta_any                                                                                  from,
        ::entt::meta_any                                                                                  to,
        ::std::function<void(::entt::meta_data, ::entt::meta_any&, ::entt::meta_data, ::entt::meta_any&)> cb
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $log(::std::string msg);

    MCNAPI bool $hasErrors() const;

    MCNAPI void $onSequenceContainer(uint64 index, ::std::function<bool()> cb);

    MCNAPI void $onAssociativeContainer(::std::string_view key, ::std::function<bool()> cb);

    MCNAPI void $onAssociativeContainer(uint64 index, ::std::function<bool()> cb);

    MCNAPI void $onSetter(::std::function<bool()> cb);

    MCNAPI void $onMetaType(::std::function<bool()> setters, ::std::function<void()> members);

    MCNAPI void $onMetaData(
        ::std::string_view                                                                                key,
        uint                                                                                              id,
        ::entt::meta_data                                                                                 data,
        ::entt::meta_any                                                                                  from,
        ::entt::meta_any                                                                                  to,
        ::std::function<void(::entt::meta_data, ::entt::meta_any&, ::entt::meta_data, ::entt::meta_any&)> cb
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Puv::internal
