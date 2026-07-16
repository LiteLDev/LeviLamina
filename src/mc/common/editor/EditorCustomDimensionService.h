#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class EditorCustomDimensionService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk8a4c36;
    ::ll::UntypedStorage<8, 8>  mUnkac2be9;
    ::ll::UntypedStorage<8, 8>  mUnkcc82cc;
    ::ll::UntypedStorage<8, 24> mUnk80acca;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorCustomDimensionService& operator=(EditorCustomDimensionService const&);
    EditorCustomDimensionService(EditorCustomDimensionService const&);
    EditorCustomDimensionService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _broadcastDimensionData() const;

    MCNAPI void _loadFromFile();

    MCNAPI void _saveToFile() const;

    MCNAPI bool addDimension(::std::string const& name);

    MCNAPI void loadAndRegister();

    MCNAPI bool removeDimension(::std::string const& name);
    // NOLINTEND
};

} // namespace Editor::Services
