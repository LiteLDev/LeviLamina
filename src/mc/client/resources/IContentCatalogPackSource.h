#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class IPackManifestFactory;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class IContentCatalogPackSource : public ::PackSource {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void refreshCatalogItems(::IPackManifestFactory&) = 0;

    // vIndex: 7
    virtual ::Bedrock::PubSub::Subscription setAsyncCallback(::std::function<void(bool)>) = 0;

    // vIndex: 8
    virtual void setEnabled(bool) = 0;

    // vIndex: 0
    virtual ~IContentCatalogPackSource() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
