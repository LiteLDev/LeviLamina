// LeviLamina docs (https://docs.levimc.org/LeviLamina/), built with the vendored levimc-kit.
// Content lives in contents/ (x.md = English, x.zh.md = Chinese). Register new pages in `nav` below
// and their Chinese nav labels in `navTranslations.zh`. See kit/README.md for every option.
import { defineDocsConfig } from './kit/docs/node/config.ts';

export default defineDocsConfig({
  base: '/LeviLamina/',
  // Header brand; page titles use the kit default ':title - :site Docs' ("Install the server - LeviLamina Docs").
  title: 'LeviLamina',
  logo: 'logo.svg',
  favicon: 'favicon.ico',
  project: 'LeviLamina',
  repo: 'https://github.com/LiteLDev/LeviLamina',
  editLink: 'https://github.com/LiteLDev/LeviLamina/edit/main/docs/main/contents/:path',
  contentDir: 'contents',
  hostname: 'https://docs.levimc.org',
  sitemap: { hostname: 'https://docs.levimc.org' },
  i18n: {
    mode: 'suffix',
    defaultLocale: 'en',
    locales: [
      { code: 'en', label: 'English', lang: 'en' },
      { code: 'zh', label: '简体中文', lang: 'zh-CN' },
      // Traditional Chinese, generated from the zh pages (levimc-kit convertFrom)
      { code: 'zh-Hant', label: '繁體中文', lang: 'zh-Hant', convertFrom: 'zh' },
    ],
  },
  urlStyle: 'directory',
  slug: 'pymdownx',
  markdown: { compat: 'python-markdown', lineNumbers: true, codeTitle: 'pygments' },
  lastUpdated: true,
  sidebar: 'tabs',
  // The header row (logo + name, the sections, search, the repository icon) fits itself to the width (kit
  // `header.tabsRow` 'auto'): one row on wide screens, the sections in their own row below when they no longer fit,
  // then the drawer (opened by the LeviMC bar's menu button).
  // The LeviMC navigation model (kit/README.md "Navigation model"): every top-level entry is a section, i.e. a header
  // tab and the sidebar tree of its pages; the brand (logo + name) is the only link to the home page. Inside a section,
  // getting started comes first and help (troubleshooting, FAQ, supported versions) last. Sections with up to 24 links
  // open every group; longer ones only the group holding the current page.
  nav: [
    {
      'User Guides': [
        {
          'Getting Started': [
            'user_guides/install.md',
            'user_guides/install_on_client.md',
            'user_guides/configure_server_under_nat.md',
          ],
        },
        'common_guides/usage_guidelines.md',
        { Help: ['user_guides/troubleshooting.md', { 'Supported Versions': 'versions.md' }] },
      ],
    },
    {
      'Developer Guides': [
        { Tutorials: ['developer_guides/tutorials/create_your_first_mod.md'] },
        {
          'How-to Guides': [
            'developer_guides/how_to_guides/event_guide.md',
            'developer_guides/how_to_guides/interface_export_guide.md',
            'developer_guides/how_to_guides/find_function_guide.md',
            'developer_guides/how_to_guides/data_driven_ui_guide.md',
            'developer_guides/how_to_guides/form_guide.md',
            'developer_guides/how_to_guides/hook_guide.md',
            'developer_guides/how_to_guides/i18n_guide.md',
            'developer_guides/how_to_guides/item_guide.md',
            'developer_guides/how_to_guides/command_guide.md',
            'developer_guides/how_to_guides/coro_guide.md',
            'developer_guides/how_to_guides/build_guide.md',
          ],
        },
        // Native mods for Minecraft on Android: loaded by LeviLauncher's Android version through the Preloader SDK
        // (moved here from LeviLauncher's docs); titles are the pages' own.
        {
          'Android Native Mods': [
            'developer_guides/android/index.md',
            'developer_guides/android/api/mod.md',
            'developer_guides/android/api/mod_menu.md',
            'developer_guides/android/api/config.md',
            'developer_guides/android/api/input.md',
            'developer_guides/android/api/hook.md',
            'developer_guides/android/api/signature.md',
            'developer_guides/android/api/patch.md',
            'developer_guides/android/api/memory_hook_macros.md',
            'developer_guides/android/api/types_and_macros.md',
          ],
        },
        { Architecture: 'developer_guides/architecture.md' },
        { Help: [{ FAQ: 'developer_guides/faq.md' }] },
      ],
    },
    // Guides to LeviLamina's API by topic (URLs api_reference/…), next to the generated API Reference below.
    {
      'API Guides': [
        { Overview: 'api_reference/index.md' },
        { Base: 'api_reference/base.md' },
        { Chrono: 'api_reference/chrono.md' },
        { Command: 'api_reference/command.md' },
        { Config: 'api_reference/config.md' },
        { Coroutine: 'api_reference/coro.md' },
        { Data: 'api_reference/data.md' },
        { 'Data-driven UI': 'api_reference/data_driven_ui.md' },
        { Event: 'api_reference/event.md' },
        { Expected: 'api_reference/expected.md' },
        { Form: 'api_reference/form.md' },
        { I18n: 'api_reference/i18n.md' },
        { 'IO & Logger': 'api_reference/io.md' },
        { 'Memory & Hook': 'api_reference/memory.md' },
        { Mod: 'api_reference/mod.md' },
        { Network: 'api_reference/network.md' },
        { Reflection: 'api_reference/reflection.md' },
        { 'Reflection (Advanced)': 'api_reference/reflection_advanced.md' },
        { Service: 'api_reference/service.md' },
        { Thread: 'api_reference/thread.md' },
        { Utils: 'api_reference/utils.md' },
        { 'Input (Client)': 'api_reference/input.md' },
      ],
    },
    // The Doxygen API reference, a section of this site with its own tree (opened in place, not a new tab): built by
    // the build-doxygen CI job and merged into dist/api/; its header is generated from dist/_kit/nav.json, with this
    // tab current.
    { 'API Reference': 'https://docs.levimc.org/LeviLamina/api/' },
    { 'Maintainer Guides': ['maintainer_guides/cpp_style_guide.md'] },
  ],
  // The Docker install page became a section of the one server install page.
  redirects: {
    'user_guides/install_on_docker/': 'user_guides/install/#install-with-docker',
    'zh/user_guides/install_on_docker/': 'zh/user_guides/install/#通过-docker-安装',
    'zh-Hant/user_guides/install_on_docker/': 'zh-Hant/user_guides/install/#通過-docker-安裝',
  },
  navTranslations: {
    zh: {
      FAQ: '常见问题',
      'Getting Started': '入门',
      Help: '帮助',
      'User Guides': '用户指南',
      'Developer Guides': '开发者指南',
      Tutorials: '教程',
      'How-to Guides': '如何做到······',
      'Android Native Mods': 'Android 原生模组',
      Architecture: '项目架构',
      'API Reference': 'API 参考',
      'API Guides': 'API 指南',
      Overview: '概览',
      Base: '基础类型',
      Chrono: '游戏时间',
      Command: '命令系统',
      Config: '配置系统',
      Coroutine: '协程',
      Data: '数据结构',
      'Data-driven UI': '数据驱动 UI',
      Event: '事件系统',
      Expected: '错误处理',
      Form: '表单 UI',
      I18n: '国际化',
      'IO & Logger': '输入输出与日志',
      'Memory & Hook': '内存与钩子',
      Mod: '模组系统',
      Network: '网络',
      Reflection: '反射',
      'Reflection (Advanced)': '反射（进阶）',
      Service: '服务系统',
      Thread: '线程工具',
      Utils: '工具函数',
      'Input (Client)': '输入系统（客户端）',
      'Maintainer Guides': '维护者指南',
      'Supported Versions': '支持的版本',
    },
  },
});
