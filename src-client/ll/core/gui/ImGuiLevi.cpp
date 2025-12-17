#include "ll/core/gui/ImGuiLevi.h"
#include "imgui.h"
#include "ll/api/service/Bedrock.h"
#include "ll/core/gui/ImGuiHelpers.h"
#include "mc/client/game/ClientInstance.h"
#include "mc/client/gui/ScreenRenderer.h"
#include "mc/client/renderer/MinecraftGraphics.h"
#include "mc/client/renderer/RenderMaterialGroup.h"
#include "mc/client/renderer/Tessellator.h"
#include "mc/client/renderer/TextureGroup.h"
#include "mc/common/client/renderer/helpers/MeshHelpers.h"
#include "mc/deps/application/AppPlatform.h"
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/file/PathView.h"
#include "mc/deps/core/image/Image.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/ServiceLocator.h"
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/deps/core_graphics/ImageType.h"
#include "mc/deps/core_graphics/enums/ColorSpace.h"
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/deps/minecraft_renderer/resources/CreateTextureFromOwnedImageTransaction.h"
#include "mc/deps/minecraft_renderer/resources/ServerTexture.h"
#include "mc/deps/minecraft_renderer/resources/UIActorOffscreenCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/UIMeshOffscreenCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/UIStructureVolumeOffscreenCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/UIThumbnailMeshOffscreenCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/mcr/mcr.h"
#include "mc/deps/renderer/Camera.h"
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/deps/renderer/hal/TextureDescription.h"


#include "ll/api/memory/Hook.h"
#include "ll/core/gui/GUI.h"


namespace ll::gui {

ImGuiContext* ImGuiLevi::mContext = nullptr;
static bool   isUnloadedTextures  = false;
void          ImGuiLevi::initialize() {
    mEnableMouseCursor = false;
    mTime              = std::chrono::steady_clock::now();
    mContext           = ImGui::CreateContext();
    ImGui::SetCurrentContext(mContext);
    ImGui::StyleColorsDark();

    ImGuiIO& io = ImGui::GetIO();

    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors | ImGuiBackendFlags_HasSetMousePos;

    // io.GetClipboardTextFn = ImGuiHelpers::getClipboardTextFromPlatform;
    // io.SetClipboardTextFn = ImGuiHelpers::setClipboardTextFromPlatform;

    io.KeyMap[ImGuiKey_Tab]        = 9;
    io.KeyMap[ImGuiKey_LeftArrow]  = 37;
    io.KeyMap[ImGuiKey_RightArrow] = 39;
    io.KeyMap[ImGuiKey_UpArrow]    = 38;
    io.KeyMap[ImGuiKey_DownArrow]  = 40;
    io.KeyMap[ImGuiKey_PageUp]     = 33;
    io.KeyMap[ImGuiKey_PageDown]   = 34;
    io.KeyMap[ImGuiKey_Home]       = 36;
    io.KeyMap[ImGuiKey_End]        = 35;
    io.KeyMap[ImGuiKey_Insert]     = 45;
    io.KeyMap[ImGuiKey_Delete]     = 46;
    io.KeyMap[ImGuiKey_Backspace]  = 8;
    io.KeyMap[ImGuiKey_Space]      = 32;
    io.KeyMap[ImGuiKey_Enter]      = 13;
    io.KeyMap[ImGuiKey_Escape]     = 27;
    io.KeyMap[ImGuiKey_A]          = 'A';
    io.KeyMap[ImGuiKey_C]          = 'C';
    io.KeyMap[ImGuiKey_V]          = 'V';
    io.KeyMap[ImGuiKey_X]          = 'X';
    io.KeyMap[ImGuiKey_Y]          = 'Y';
    io.KeyMap[ImGuiKey_Z]          = 'Z';

    ll::gui::initializeImGui();

    mIsInititalize = true;
}

bool ImGuiLevi::_createDeviceObjects() {
    if (!mContext) return true;

    unsigned char* pixels = nullptr;
    int            width = 0, height = 0;

    mContext->IO.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);

    auto StrideFromFormat = mce::TextureDescription::getStrideFromFormat(mce::TextureFormat::R8g8b8a8Unorm);

    cg::ImageDescription
               des(width, height, mce::TextureFormat::R8g8b8a8Unorm, cg::ColorSpace::SRGB, cg::ImageType::Texture2D, 1);
    mce::Image image;
    image.mImageBytes = mce::Blob(pixels, width * height * StrideFromFormat);
    image.mWidth      = width;
    image.mHeight     = height;
    image.imageFormat = mce::ImageFormat::RGBA8Unorm;

    cg::ImageBuffer imageBuffer(std::move(image));
    imageBuffer.allocateStorage(des);

    ResourceLocation resource(Core::PathView(Core::Path("levi_imgui")));

    ll::service::getClientInstance()->getTextureGroup()->uploadTexture(resource, imageBuffer);
    mFontTexture = ll::service::getClientInstance()
                       ->getTextureGroup()
                       ->getTexture(resource, false, {}, cg::TextureSetLayerType::Color);
    mContext->IO.Fonts->TexID = &mFontTexture;
    return true;
}


LL_AUTO_TYPE_INSTANCE_HOOK(
    unloadAllTextures,
    HookPriority::Normal,
    mce::TextureGroup,
    &mce::TextureGroup::unloadAllTextures,
    void
) {
    origin();
    isUnloadedTextures = true;
}

void ImGuiLevi::_newFrame(ScreenContext& uiRenderContext, KeyboardManager* keyboardManager) {
    ImGui::SetCurrentContext(mContext);
    ImGuiIO& io = ImGui::GetIO();

    if (!mCreatedDeviceObject || isUnloadedTextures) {
        _createDeviceObjects();
        mCreatedDeviceObject = true;
        isUnloadedTextures   = false;
    }

    if (auto platform = ll::service::getAppPlatform()) {
        io.DisplaySize.x = platform->getScreenWidth();
        io.DisplaySize.y = platform->getScreenHeight();
    }

    if (ImGui::GetCurrentContext()->ActiveIdIsJustActivated && ImGui::GetCurrentContext()->ActiveIdWindow
        && keyboardManager && keyboardManager->isKeyboardActive()) {
        keyboardManager->disableKeyboard();
    }

    auto now = std::chrono::steady_clock::now();
    if (mTime.time_since_epoch().count() == 0) mTime = now;

    float delta  = std::chrono::duration<float>(now - mTime).count();
    io.DeltaTime = delta > 0.0f ? delta : 1.0f / 60.0f;
    mTime        = now;

    ll::gui::updateImGui();
}

void ImGuiLevi::beginRender(ScreenContext* screenContext, KeyboardManager* keyboardManager) {
    if (screenContext) {
        mScreenContext = screenContext;
        _newFrame(*screenContext, keyboardManager);
    }
}

void ImGuiLevi::_renderDrawData(ScreenContext& screenContext, ImDrawData* draw_data) {
    ImGui::SetCurrentContext(mContext);
    if (!draw_data) {
        return;
    }

    screenContext.camera.mUnkadd7ad.as<MatrixStack>().push(false);
    screenContext.camera.mUnkc5fde2.as<MatrixStack>().push(false);
    screenContext.camera.mUnk469690.as<MatrixStack>().push(false);

    float scale = ll::service::getClientInstance()->getGuiScale();

    for (int commandListIndex = 0; commandListIndex < draw_data->CmdListsCount; ++commandListIndex) {
        const ImDrawList& commandList = *draw_data->CmdLists[commandListIndex];

        for (int commandIndex = 0; commandIndex < commandList.CmdBuffer.size(); ++commandIndex) {
            const ImDrawCmd& command = commandList.CmdBuffer[commandIndex];

            screenContext.tessellator.begin(mce::PrimitiveMode::TriangleList, 0, 0);

            const ImDrawVert* vertices = commandList.VtxBuffer.Data + command.VtxOffset;
            const ImDrawIdx*  indices  = commandList.IdxBuffer.Data + command.IdxOffset;

            for (unsigned int i = 0; i < command.ElemCount; i += 3) {
                const ImDrawVert& v0 = vertices[indices[i + 2]];
                const ImDrawVert& v1 = vertices[indices[i + 1]];
                const ImDrawVert& v2 = vertices[indices[i + 0]];

                if (!screenContext.tessellator.mNoColor) {
                    if (!screenContext.tessellator.mNextColor->has_value()) screenContext.tessellator.mNextColor = 1;
                    screenContext.tessellator.mNextColor->value() = v0.col;
                    if (!screenContext.tessellator.mIsFormatFixed) {
                        auto& flags = screenContext.tessellator.mMeshData->mFieldEnabled.get();
                        flags[1]    = true;
                    }
                }
                screenContext.tessellator.vertexUV(v0.pos.x / scale, v0.pos.y / scale, 0.0f, v0.uv.x, v0.uv.y);

                if (!screenContext.tessellator.mNoColor) {
                    screenContext.tessellator.mNextColor->value() = v1.col;
                }
                screenContext.tessellator.vertexUV(v1.pos.x / scale, v1.pos.y / scale, 0.0f, v1.uv.x, v1.uv.y);

                if (!screenContext.tessellator.mNoColor) {
                    screenContext.tessellator.mNextColor->value() = v2.col;
                }
                screenContext.tessellator.vertexUV(v2.pos.x / scale, v2.pos.y / scale, 0.0f, v2.uv.x, v2.uv.y);
            }

            mce::Mesh mesh = screenContext.tessellator.end(
                Tessellator::UploadMode(0),
                "Levi_Imgui",
                Tessellator::SupplementaryFieldAutoGenerationMode(0)
            );

            auto* texture = static_cast<const mce::TexturePtr*>(command.TextureId);

            if ((nullptr != texture)) {
                mesh.renderMesh(
                    screenContext,
                    mce::MaterialPtr(mce::RenderMaterialGroup::common(), "im_gui"),
                    *texture,
                    0,
                    0,
                    std::monostate(),
                    nullptr
                );
            }
            screenContext.tessellator.clear();
        }
    }
}

void ImGuiLevi::endRender(ScreenContext* screenContext) {
    if (screenContext) {
        ImGui::SetCurrentContext(mContext);
        ImGui::Render();
        _renderDrawData(*screenContext, ImGui::GetDrawData());
        ImGui::UpdateHoveredWindowAndCaptureFlags();
    }
    mScreenContext = nullptr;
}

} // namespace ll::gui