#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/interface/IWorldTemplateManager.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class FilePathManager; }
namespace mce { class UUID; }
// clang-format on

class WorldTemplateManager : public ::IWorldTemplateManager {
public:
    // prevent constructor by default
    WorldTemplateManager& operator=(WorldTemplateManager const&);
    WorldTemplateManager(WorldTemplateManager const&);
    WorldTemplateManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldTemplateManager();

    // vIndex: 1
    virtual struct WorldTemplateInfo const*
    findInstalledWorldTemplateByUUID(std::vector<class mce::UUID> const& packUUIDs) const;

    // vIndex: 2
    virtual class Bedrock::PubSub::Subscription
    registerModifiedCallback(std::function<void(std::pair<std::string, bool> const&)> newCallbackFunction);

    // vIndex: 3
    virtual std::vector<std::unique_ptr<struct WorldTemplateInfo>> const& getLocalTemplates() const;

    MCAPI WorldTemplateManager(
        class PackManifestFactory&                                          packManifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider,
        class PackSourceFactory&                                            packSourceFactory,
        Bedrock::NotNullNonOwnerPtr<class Core::FilePathManager> const&     filePathManager,
        bool                                                                initAsync
    );

    MCAPI struct WorldTemplateInfo const* findInstalledWorldTemplate(struct PackIdVersion const& packIdentityToFind
    ) const;

    MCAPI class Core::PathBuffer<std::string> getWorldTemplatesPath() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _initialize();

    MCAPI void _initializePackSources();

    MCAPI void _onDiscoverWorldTemplate(class Pack const& pack);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI struct WorldTemplateInfo const*
    findInstalledWorldTemplateByUUID$(std::vector<class mce::UUID> const& packUUIDs) const;

    MCAPI std::vector<std::unique_ptr<struct WorldTemplateInfo>> const& getLocalTemplates$() const;

    MCAPI class Bedrock::PubSub::Subscription
    registerModifiedCallback$(std::function<void(std::pair<std::string, bool> const&)> newCallbackFunction);

    // NOLINTEND
};
