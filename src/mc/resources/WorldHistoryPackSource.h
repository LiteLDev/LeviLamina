#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class WorldHistoryPackSource : public ::PackSource {
public:
    // prevent constructor by default
    WorldHistoryPackSource& operator=(WorldHistoryPackSource const&);
    WorldHistoryPackSource(WorldHistoryPackSource const&);
    WorldHistoryPackSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldHistoryPackSource() = default;

    // vIndex: 1
    virtual void forEachPackConst(std::function<void(class Pack const&)> callback) const;

    // vIndex: 2
    virtual void forEachPack(std::function<void(class Pack&)> callback);

    // vIndex: 3
    virtual ::PackOrigin getPackOrigin() const;

    // vIndex: 4
    virtual ::PackType getPackType() const;

    // vIndex: 5
    virtual class PackSourceReport load(
        class IPackManifestFactory&                                         manifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    MCAPI WorldHistoryPackSource(class Core::Path const& pathToWorld, ::PackType type);

    MCAPI class Core::PathBuffer<std::string> const& getPathToWorld() const;

    MCAPI static class Core::PathBuffer<std::string>
    generateHistoryFilePath(class Core::Path const& pathToWorld, ::PackType type);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addPackFromHistoryPack(class WorldPackHistory const& worldPackHistory);

    MCAPI std::unique_ptr<class Pack> _createPackFromHistoryPack(class WorldPackHistory const& worldPackHistory);

    MCAPI bool _readWorldHistoryFile();

    // NOLINTEND
};
