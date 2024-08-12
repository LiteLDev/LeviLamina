#pragma once
#include <string>
#include <dxgi1_6.h>

namespace ImGuiHooks {
	typedef HRESULT(STDMETHODCALLTYPE* PFN_CreateDXGIFactory1)(REFIID riid, _COM_Outptr_ void** ppFactory);
	//16
	typedef HRESULT(STDMETHODCALLTYPE* PFN_IDXGIFactory2_CreateSwapChainForCoreWindow)(
		IDXGIFactory2* This,
		/* [annotation][in] */
		_In_  IUnknown* pDevice,
		/* [annotation][in] */
		_In_  IUnknown* pWindow,
		/* [annotation][in] */
		_In_  const DXGI_SWAP_CHAIN_DESC1* pDesc,
		/* [annotation][in] */
		_In_opt_  IDXGIOutput* pRestrictToOutput,
		/* [annotation][out] */
		_COM_Outptr_  IDXGISwapChain1** ppSwapChain);
	//8
	typedef HRESULT(STDMETHODCALLTYPE* PFN_IDXGISwapChain_Present)(
		IDXGISwapChain* This,
		/* [in] */ UINT SyncInterval,
		/* [in] */ UINT Flags);
	//13
	typedef HRESULT(STDMETHODCALLTYPE* PFN_IDXGISwapChain_ResizeBuffers)(
		IDXGISwapChain* This,
		/* [in] */ UINT BufferCount,
		/* [in] */ UINT Width,
		/* [in] */ UINT Height,
		/* [in] */ DXGI_FORMAT NewFormat,
		/* [in] */ UINT SwapChainFlags);

	void init();
	const std::string& getGPUName();
	const std::string& getRendererType();
}
