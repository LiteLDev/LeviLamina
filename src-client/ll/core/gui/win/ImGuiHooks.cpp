#include "ll/core/gui/ImGuiHooks.h"

#include "windows.h"

#include "psapi.h"

#pragma warning(push)
#pragma warning(disable : 5204)
#include "atlbase.h"
#pragma warning(pop)

#include "initguid.h"

#include "d3d12.h"

#include "d3d11.h"

#include <memory>
#include <string>

#include "backends/imgui_impl_dx12.h"

#include "backends/imgui_impl_dx11.h"

#include "backends/imgui_impl_winrt.h"

#include "dxgi1_6.h"

#include "ll/api/memory/Hook.h"
#include "ll/api/utils/StringUtils.h"

#include "ll/core/gui/GUI.h"


namespace ll::gui {
typedef HRESULT(STDMETHODCALLTYPE* PFN_CreateDXGIFactory1)(REFIID riid, _COM_Outptr_ void** ppFactory);
// 16
typedef HRESULT(STDMETHODCALLTYPE* PFN_IDXGIFactory2_CreateSwapChainForCoreWindow)(
    IDXGIFactory2* This,
    /* [annotation][in] */
    _In_ IUnknown* pDevice,
    /* [annotation][in] */
    _In_ IUnknown* pWindow,
    /* [annotation][in] */
    _In_ const DXGI_SWAP_CHAIN_DESC1* pDesc,
    /* [annotation][in] */
    _In_opt_ IDXGIOutput* pRestrictToOutput,
    /* [annotation][out] */
    _COM_Outptr_ IDXGISwapChain1** ppSwapChain
);
// 8
typedef HRESULT(STDMETHODCALLTYPE* PFN_IDXGISwapChain_Present)(
    IDXGISwapChain* This,
    /* [in] */ UINT SyncInterval,
    /* [in] */ UINT Flags
);
// 13
typedef HRESULT(STDMETHODCALLTYPE* PFN_IDXGISwapChain_ResizeBuffers)(
    IDXGISwapChain*        This,
    /* [in] */ UINT        BufferCount,
    /* [in] */ UINT        Width,
    /* [in] */ UINT        Height,
    /* [in] */ DXGI_FORMAT NewFormat,
    /* [in] */ UINT        SwapChainFlags
);

static IDXGIFactory2* factory;
static IUnknown*      coreWindow;
static bool           imguiInitialized = false;
static std::string    rendererType;
static std::string    gpuName = "unknown";
static uint64_t       gpuVideoMemory;
static uint32_t       gpuVendorID;
static uint32_t       gpuDeviceID;

const std::string& getGPUName() { return gpuName; }

const std::string& getRendererType() { return rendererType; }

static void replaceVtable(void* vptr, size_t index, void** outOldFunc, void* newFunc) {
    void** ptr     = (void**)vptr;
    void*  oldFunc = ptr[index];
    if (oldFunc == newFunc) {
        return;
    }
    if (outOldFunc != nullptr) {
        *outOldFunc = oldFunc;
    }

    ll::memory::modify(&ptr[index], sizeof(void*), [=]() { ptr[index] = newFunc; });
}

namespace D3D12 {
CComPtr<ID3D12Device>         device;
CComPtr<ID3D12DescriptorHeap> descriptorHeapBackBuffers;
CComPtr<ID3D12DescriptorHeap> descriptorHeapImGuiRender;
ID3D12CommandQueue*           commandQueue;

struct BackBufferContext {
    CComPtr<ID3D12CommandAllocator>    commandAllocator;
    CComPtr<ID3D12GraphicsCommandList> commandList;
    ID3D12Resource*                    resource         = nullptr;
    D3D12_CPU_DESCRIPTOR_HANDLE        descriptorHandle = {0};
};

uint32_t                             backBufferCount = 0;
std::unique_ptr<BackBufferContext[]> backBufferContext;

void createRT(IDXGISwapChain* swapChain) {
    const auto rtvDescriptorSize          = device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
    D3D12_CPU_DESCRIPTOR_HANDLE rtvHandle = descriptorHeapBackBuffers->GetCPUDescriptorHandleForHeapStart();

    for (uint32_t i = 0; i < backBufferCount; i++) {
        ID3D12Resource* pBackBuffer           = nullptr;
        backBufferContext[i].descriptorHandle = rtvHandle;
        swapChain->GetBuffer(i, IID_PPV_ARGS(&pBackBuffer));
        device->CreateRenderTargetView(pBackBuffer, nullptr, rtvHandle);
        backBufferContext[i].resource  = pBackBuffer;
        rtvHandle.ptr                 += rtvDescriptorSize;
    }
}

void releaseRT() {
    for (size_t i = 0; i < backBufferCount; i++) {
        if (backBufferContext[i].resource) {
            backBufferContext[i].resource->Release();
            backBufferContext[i].resource = nullptr;
        }
    }
}

bool initializeImguiBackend(IDXGISwapChain* pSwapChain) {
    if (SUCCEEDED(pSwapChain->GetDevice(IID_ID3D12Device, (void**)&device))) {
        rendererType = "Direct3D 12";
        CComPtr<IDXGIFactory4> factory4;
        if (SUCCEEDED(factory->QueryInterface(&factory4))) {
            CComPtr<IDXGIAdapter1> adapter;
            if (SUCCEEDED(factory4->EnumAdapterByLuid(device->GetAdapterLuid(), IID_PPV_ARGS(&adapter)))) {
                DXGI_ADAPTER_DESC1 adapterDesc;
                adapter->GetDesc1(&adapterDesc);
                gpuName        = ll::string_utils::wstr2str(adapterDesc.Description);
                gpuVendorID    = adapterDesc.VendorId;
                gpuDeviceID    = adapterDesc.DeviceId;
                gpuVideoMemory = adapterDesc.DedicatedVideoMemory;
            }
        }

        initializeImGui();

        DXGI_SWAP_CHAIN_DESC desc;
        pSwapChain->GetDesc(&desc);

        backBufferCount = desc.BufferCount;
        backBufferContext.reset(new BackBufferContext[backBufferCount]);

        for (size_t i = 0; i < backBufferCount; i++) {
            if (device->CreateCommandAllocator(
                    D3D12_COMMAND_LIST_TYPE_DIRECT,
                    IID_PPV_ARGS(&backBufferContext[i].commandAllocator)
                )
                != S_OK) {
                return false;
            }

            if (device->CreateCommandList(
                    0,
                    D3D12_COMMAND_LIST_TYPE_DIRECT,
                    backBufferContext[i].commandAllocator,
                    nullptr,
                    IID_PPV_ARGS(&backBufferContext[i].commandList)
                ) != S_OK
                || backBufferContext[i].commandList->Close() != S_OK) {
                return false;
            }
        }

        D3D12_DESCRIPTOR_HEAP_DESC descriptorImGuiRender = {};
        descriptorImGuiRender.Type                       = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
        descriptorImGuiRender.NumDescriptors             = backBufferCount;
        descriptorImGuiRender.Flags                      = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;

        if (device->CreateDescriptorHeap(&descriptorImGuiRender, IID_PPV_ARGS(&descriptorHeapImGuiRender)) != S_OK) {
            return false;
        }

        D3D12_DESCRIPTOR_HEAP_DESC descriptorBackBuffers;
        descriptorBackBuffers.Type           = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
        descriptorBackBuffers.NumDescriptors = backBufferCount;
        descriptorBackBuffers.Flags          = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
        descriptorBackBuffers.NodeMask       = 1;

        if (device->CreateDescriptorHeap(&descriptorBackBuffers, IID_PPV_ARGS(&descriptorHeapBackBuffers)) != S_OK) {
            return false;
        }

        createRT(pSwapChain);

        ImGui_ImplWinRT_Init(coreWindow);
        ImGui_ImplDX12_Init(
            device,
            backBufferCount,
            DXGI_FORMAT_R8G8B8A8_UNORM,
            descriptorHeapImGuiRender,
            descriptorHeapImGuiRender->GetCPUDescriptorHandleForHeapStart(),
            descriptorHeapImGuiRender->GetGPUDescriptorHandleForHeapStart()
        );
        ImGui_ImplDX12_CreateDeviceObjects();
    }
    return true;
}

void renderImGui(IDXGISwapChain3* swapChain) {
    ImGui_ImplWinRT_Data* bd = (ImGui_ImplWinRT_Data*)ImGui::GetIO().BackendPlatformUserData;
    if (bd && bd->DPIChanged) {
        ImGui_ImplDX12_InvalidateDeviceObjects();
        updateScaling(bd->DPI);
        ImGui_ImplDX12_CreateDeviceObjects();
        bd->DPIChanged = false;
    }

    ImGui_ImplDX12_NewFrame();
    ImGui_ImplWinRT_NewFrame();

    updateImGui();

    BackBufferContext& currentBufferContext = backBufferContext[swapChain->GetCurrentBackBufferIndex()];
    currentBufferContext.commandAllocator->Reset();

    D3D12_RESOURCE_BARRIER barrier;
    barrier.Type                   = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    barrier.Flags                  = D3D12_RESOURCE_BARRIER_FLAG_NONE;
    barrier.Transition.pResource   = currentBufferContext.resource;
    barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
    barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
    barrier.Transition.StateAfter  = D3D12_RESOURCE_STATE_RENDER_TARGET;

    ID3D12DescriptorHeap* descriptorHeaps[1] = {descriptorHeapImGuiRender.p};
    currentBufferContext.commandList->Reset(currentBufferContext.commandAllocator, nullptr);
    currentBufferContext.commandList->ResourceBarrier(1, &barrier);
    currentBufferContext.commandList->OMSetRenderTargets(1, &currentBufferContext.descriptorHandle, FALSE, nullptr);
    currentBufferContext.commandList->SetDescriptorHeaps(1, descriptorHeaps);

    ImGui::Render();
    ImGui_ImplDX12_RenderDrawData(ImGui::GetDrawData(), currentBufferContext.commandList);

    ID3D12CommandList* commandLists[1] = {currentBufferContext.commandList.p};
    barrier.Transition.StateBefore     = D3D12_RESOURCE_STATE_RENDER_TARGET;
    barrier.Transition.StateAfter      = D3D12_RESOURCE_STATE_PRESENT;
    currentBufferContext.commandList->ResourceBarrier(1, &barrier);
    currentBufferContext.commandList->Close();
    commandQueue->ExecuteCommandLists(1, commandLists);
}

PFN_IDXGISwapChain_Present IDXGISwapChain_Present_Original = nullptr;
HRESULT STDMETHODCALLTYPE  IDXGISwapChain_Present_Hook(IDXGISwapChain* This, UINT SyncInterval, UINT Flags) {
    CComPtr<IDXGISwapChain3> swapChain3;
    if (FAILED(This->QueryInterface<IDXGISwapChain3>(&swapChain3))) {
        return IDXGISwapChain_Present_Original(This, SyncInterval, Flags);
    }

    if (!imguiInitialized) {
        // printf("Initializing ImGui on Direct3D 12\n");
        if (initializeImguiBackend(This)) {
            imguiInitialized = true;
        } else {
            // printf("ImGui is not initialized\n");
            return IDXGISwapChain_Present_Original(This, SyncInterval, Flags);
        }
    }

    renderImGui(swapChain3);

    return IDXGISwapChain_Present_Original(This, SyncInterval, Flags);
}

PFN_IDXGISwapChain_ResizeBuffers IDXGISwapChain_ResizeBuffers_Original;
HRESULT STDMETHODCALLTYPE        IDXGISwapChain_ResizeBuffers_Hook(
           IDXGISwapChain* This,
           UINT            BufferCount,
           UINT            Width,
           UINT            Height,
           DXGI_FORMAT     NewFormat,
           UINT            SwapChainFlags
       ) {
    releaseRT();
    HRESULT hResult =
        IDXGISwapChain_ResizeBuffers_Original(This, BufferCount, Width, Height, NewFormat, SwapChainFlags);
    createRT(This);
    return hResult;
}
} // namespace D3D12

namespace D3D11 {
ID3D11Device*                device;
CComPtr<ID3D11DeviceContext> deviceContext;

uint32_t                 backBufferCount = 0;
ID3D11RenderTargetView** renderTargetViews;

void createRT(IDXGISwapChain* swapChain) {
    for (uint32_t i = 0; i < backBufferCount; i++) {
        CComPtr<ID3D11Resource> backBuffer;
        swapChain->GetBuffer(i, IID_PPV_ARGS(&backBuffer));

        ID3D11RenderTargetView* rtv;
        device->CreateRenderTargetView(backBuffer, nullptr, &rtv);

        renderTargetViews[i] = rtv;
    }
}

void releaseRT() {
    for (size_t i = 0; i < backBufferCount; i++) {
        if (renderTargetViews[i]) {
            renderTargetViews[i]->Release();
            renderTargetViews[i] = nullptr;
        }
    }
}

bool initializeImguiBackend(IDXGISwapChain* pSwapChain) {
    rendererType = "Direct3D 11";

    initializeImGui();

    DXGI_SWAP_CHAIN_DESC desc;
    pSwapChain->GetDesc(&desc);

    backBufferCount   = desc.BufferCount;
    renderTargetViews = new ID3D11RenderTargetView*[backBufferCount];

    device->GetImmediateContext(&deviceContext);

    createRT(pSwapChain);

    ImGui_ImplWinRT_Init(coreWindow);
    ImGui_ImplDX11_Init(device, deviceContext);
    ImGui_ImplDX11_CreateDeviceObjects();

    return true;
}

void renderImGui(IDXGISwapChain3* swapChain) {
    ImGui_ImplWinRT_Data* bd = (ImGui_ImplWinRT_Data*)ImGui::GetIO().BackendPlatformUserData;
    if (bd && bd->DPIChanged) {
        ImGui_ImplDX11_InvalidateDeviceObjects();
        updateScaling(bd->DPI);
        ImGui_ImplDX11_CreateDeviceObjects();
        bd->DPIChanged = false;
    }

    ImGui_ImplDX11_NewFrame();
    ImGui_ImplWinRT_NewFrame();

    updateImGui();

    ID3D11RenderTargetView* currentRTV = renderTargetViews[swapChain->GetCurrentBackBufferIndex()];
    deviceContext->OMSetRenderTargets(1, &currentRTV, nullptr);

    ImGui::Render();
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
}

PFN_IDXGISwapChain_Present IDXGISwapChain_Present_Original = nullptr;
HRESULT STDMETHODCALLTYPE  IDXGISwapChain_Present_Hook(IDXGISwapChain* This, UINT SyncInterval, UINT Flags) {
    CComPtr<IDXGISwapChain3> swapChain3;
    if (FAILED(This->QueryInterface<IDXGISwapChain3>(&swapChain3))) {
        return IDXGISwapChain_Present_Original(This, SyncInterval, Flags);
    }

    if (imguiInitialized) {
        renderImGui(swapChain3);
    }

    return IDXGISwapChain_Present_Original(This, SyncInterval, Flags);
}

PFN_IDXGISwapChain_ResizeBuffers IDXGISwapChain_ResizeBuffers_Original;
HRESULT STDMETHODCALLTYPE        IDXGISwapChain_ResizeBuffers_Hook(
           IDXGISwapChain* This,
           UINT            BufferCount,
           UINT            Width,
           UINT            Height,
           DXGI_FORMAT     NewFormat,
           UINT            SwapChainFlags
       ) {
    releaseRT();
    HRESULT hResult =
        IDXGISwapChain_ResizeBuffers_Original(This, BufferCount, Width, Height, NewFormat, SwapChainFlags);
    createRT(This);
    return hResult;
}
} // namespace D3D11

PFN_IDXGIFactory2_CreateSwapChainForCoreWindow IDXGIFactory2_CreateSwapChainForCoreWindow_Original;
HRESULT STDMETHODCALLTYPE                      IDXGIFactory2_CreateSwapChainForCoreWindow_Hook(
                         IDXGIFactory2*               This,
                         IUnknown*                    pDevice,
                         IUnknown*                    pWindow,
                         const DXGI_SWAP_CHAIN_DESC1* pDesc,
                         IDXGIOutput*                 pRestrictToOutput,
                         IDXGISwapChain1**            ppSwapChain
                     ) {
    if (pWindow) {
        coreWindow = pWindow;
    }

    HRESULT hResult = IDXGIFactory2_CreateSwapChainForCoreWindow_Original(
        This,
        pDevice,
        pWindow,
        pDesc,
        pRestrictToOutput,
        ppSwapChain
    );
    if (SUCCEEDED(hResult)) {
        IDXGISwapChain1*            swapChain = *ppSwapChain;
        CComPtr<ID3D12CommandQueue> d3d12CommandQueue;
        CComPtr<ID3D11Device>       d3d11Device;
        if (SUCCEEDED(pDevice->QueryInterface(&d3d12CommandQueue))) {
            // Direct3D 12
            D3D12::commandQueue = (ID3D12CommandQueue*)pDevice;
            if (!D3D12::IDXGISwapChain_Present_Original) {
                replaceVtable(
                    *(void**)swapChain,
                    8,
                    (void**)&D3D12::IDXGISwapChain_Present_Original,
                    D3D12::IDXGISwapChain_Present_Hook
                );
            }
            if (!D3D12::IDXGISwapChain_ResizeBuffers_Original) {
                replaceVtable(
                    *(void**)swapChain,
                    13,
                    (void**)&D3D12::IDXGISwapChain_ResizeBuffers_Original,
                    D3D12::IDXGISwapChain_ResizeBuffers_Hook
                );
            }
            // When the graphics API used by RenderDragon is D3D12, this function will be called in a non-main thread
            // and later IDXGISwapChain::Present will be called three times in the main thread, so initialize ImGui
            // later in IDXGISwapChain::Present
        } else if (SUCCEEDED(pDevice->QueryInterface(&d3d11Device))) {
            // Direct3D 11
            D3D11::device = (ID3D11Device*)pDevice;
            if (!D3D11::IDXGISwapChain_Present_Original)
                replaceVtable(
                    *(void**)swapChain,
                    8,
                    (void**)&D3D11::IDXGISwapChain_Present_Original,
                    D3D11::IDXGISwapChain_Present_Hook
                );
            if (!D3D11::IDXGISwapChain_ResizeBuffers_Original)
                replaceVtable(
                    *(void**)swapChain,
                    13,
                    (void**)&D3D11::IDXGISwapChain_ResizeBuffers_Original,
                    D3D11::IDXGISwapChain_ResizeBuffers_Hook
                );
            // When the graphics API used by RenderDragon is D3D11, this function will be called in the main thread, and
            // IDXGISwapChain::Present will all be called in a non-main thread, so initialize ImGui here immediately
            // printf("Initializing ImGui on Direct3D 11\n");
            imguiInitialized = D3D11::initializeImguiBackend(swapChain);
            // if (!imguiInitialized) {
            // 	printf("Failed to initialize ImGui on Direct3D 11\n");
            // }
        } else {
            // not D3D11 and D3D12, wtf?
        }
    }
    return hResult;
}

HRESULT (*createDXGIFactory1Original)(REFIID riid, void** ppFactory) = nullptr;
HRESULT createDXGIFactory1Hook(REFIID riid, void** ppFactory) {
    HRESULT hResult = createDXGIFactory1Original(riid, ppFactory);
    if (IsEqualIID(IID_IDXGIFactory2, riid) && SUCCEEDED(hResult)) {
        // printf("CreateDXGIFactory1 riid=IID_IDXGIFactory2\n");
        IDXGIFactory2* factory2 = (IDXGIFactory2*)*ppFactory;
        if (!IDXGIFactory2_CreateSwapChainForCoreWindow_Original) {
            replaceVtable(
                *(void**)factory2,
                16,
                (void**)&IDXGIFactory2_CreateSwapChainForCoreWindow_Original,
                IDXGIFactory2_CreateSwapChainForCoreWindow_Hook
            );
        }
        factory = factory2;
    }
    return hResult;
}

void init() {
    ll::memory::hook(
        CreateDXGIFactory1,
        createDXGIFactory1Hook,
        (ll::memory::FuncPtr*)&createDXGIFactory1Original,
        ll::memory::HookPriority::Normal
    );
}
} // namespace ll::gui
