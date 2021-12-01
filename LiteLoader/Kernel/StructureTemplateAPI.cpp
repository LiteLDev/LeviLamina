#include <MC/StructureTemplate.hpp>
#include <MC/StructureSettings.hpp>
#include <MC/StructureTemplateData.hpp>
#include <MC/CompoundTag.hpp>
#include <MC/Level.hpp>
#include <MC/Dimension.hpp>

StructureTemplate StructureTemplate::fromTag(std::string name, CompoundTag* tag){
    auto name_span = gsl::string_span<-1>(name);
    auto st = StructureTemplate();
    //st.getName(name_span)
    st.getData().load(*tag);
    return st;
}

std::unique_ptr<CompoundTag> StructureTemplate::toTag() {
    return save();
}

StructureTemplate StructureTemplate::fromWorld(std::string name, int dimid, BlockPos p1, BlockPos p2, bool ignoreBlocks, bool ignoreEntities) {
    auto name_span = gsl::string_span<-1>(name);
    auto st = StructureTemplate();
    //st.getName();
    BlockPos start = {std::min(p1.x, p2.x), std::min(p1.y, p2.y), std::min(p1.z, p2.z)};
    BlockPos size = {std::abs(p1.x - p2.x) + 1, std::abs(p1.y - p2.y) + 1, std::abs(p1.z - p2.z) + 1};
    auto setting = StructureSettings();
    setting.setIgnoreBlocks(ignoreBlocks);
    setting.setIgnoreEntities(ignoreEntities);
    setting.setStructureSize(size);
    st.fillFromWorld(*Level::getBlockSource(dimid), start, setting);
    return st;
}

bool StructureTemplate::toWorld(int dimid, BlockPos p1, Mirror mirror, Rotation rotation) {
    auto palette = Level::getBlockPalette();
    auto bs = Level::getBlockSource(dimid);
    auto setting = StructureSettings();
    setting.setMirror(mirror);
    setting.setStructureSize(getSize());
    setting.setRotation(rotation);
    placeInWorld(*bs, *palette, p1, setting, nullptr, false);
    return true;
};
StructureTemplateData& StructureTemplate::getData() {
    return *dAccess<StructureTemplateData*, 32>(this);
};

