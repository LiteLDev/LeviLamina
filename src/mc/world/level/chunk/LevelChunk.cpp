#include "mc/world/level/chunk/LevelChunk.h"

#include "mc/world/level/chunk/SubChunk.h" // IWYU pragma: keep for std::vector<SubChunk>::size
#include "mc/world/level/dimension/Dimension.h"

namespace {

// Protocol constants of SubChunkPacket::HeightmapData. HEIGHT_COLUMN_ABOVE_SUBCHUNK is an exported
// engine symbol (16); heights below a subchunk's bottom are stored as -1 (0xFF on the wire).
constexpr short HEIGHT_COLUMN_ABOVE_SUBCHUNK = 16;
constexpr short HEIGHT_COLUMN_BELOW_SUBCHUNK = -1;

} // namespace

void LevelChunk::populateHeightMapDataForSubChunkPacket(
    short                                 subChunkAbsoluteIndex,
    ::SubChunkPacket::SubChunkPacketData& subChunkPacketData
) const {
    using HeightMapDataType = SubChunkPacket::HeightMapDataType;
    using HeightmapData     = SubChunkPacket::HeightmapData;

    short const minSubChunkIndex = static_cast<short>(mDimension.mHeightRange->mMin >> 4);
    int const   relativeIndex    = static_cast<int>(subChunkAbsoluteIndex) - minSubChunkIndex;
    if (relativeIndex < 0 || static_cast<size_t>(relativeIndex) >= mSubChunks->size()) {
        subChunkPacketData.mHeightMapData->mHeightMapType = HeightMapDataType::NoData;
        return;
    }

    int const      subChunkBottomY     = relativeIndex * 16;
    HeightmapData& heightMapData       = *subChunkPacketData.mHeightMapData;
    bool           regularAllAbove     = true; // every column top at/above this subchunk's top
    bool           regularAllBelow     = true; // every column top below this subchunk's bottom
    bool           renderAllAbove      = true;
    bool           renderAllBelow      = true;
    bool           renderEqualsRegular = true;
    auto           writeHeight         = [&](int height, bool& allAbove, bool& allBelow) {
        if (height < 0) {
            height = HEIGHT_COLUMN_BELOW_SUBCHUNK;
        } else if (height >= HEIGHT_COLUMN_ABOVE_SUBCHUNK) {
            height = HEIGHT_COLUMN_ABOVE_SUBCHUNK;
        }
        allAbove &= height == HEIGHT_COLUMN_ABOVE_SUBCHUNK;
        allBelow &= height == HEIGHT_COLUMN_BELOW_SUBCHUNK;
        return static_cast<schar>(height);
    };

    for (int x = 0; x < 16; ++x) {
        for (int z = 0; z < 16; ++z) {
            int const index = x * 16 + z;

            int const regularHeight =
                writeHeight(mHeightmap.get()[index].mVal - subChunkBottomY, regularAllAbove, regularAllBelow);
            int const renderHeight =
                writeHeight(mRenderHeightmap.get()[index].mVal - subChunkBottomY, renderAllAbove, renderAllBelow);
            renderEqualsRegular &= renderHeight == regularHeight;

            heightMapData.mSubchunkHeightMap.get()[x][z]       = static_cast<schar>(regularHeight);
            heightMapData.mSubchunkRenderHeightMap.get()[x][z] = static_cast<schar>(renderHeight);
        }
    }

    if (regularAllAbove) {
        heightMapData.mHeightMapType = HeightMapDataType::AllTooHigh;
    } else if (regularAllBelow) {
        heightMapData.mHeightMapType = HeightMapDataType::AllTooLow;
    } else {
        heightMapData.mHeightMapType = HeightMapDataType::HasData;
    }

    if (renderAllAbove) {
        heightMapData.mRenderHeightMapType = HeightMapDataType::AllTooHigh;
    } else if (renderAllBelow) {
        heightMapData.mRenderHeightMapType = HeightMapDataType::AllTooLow;
    } else if (renderEqualsRegular) {
        heightMapData.mRenderHeightMapType = HeightMapDataType::AllCopied;
    } else {
        heightMapData.mRenderHeightMapType = HeightMapDataType::HasData;
    }
}
