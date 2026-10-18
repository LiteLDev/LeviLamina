// The kit version (keep in sync with ../VERSION; static/build-static.mjs and the tests check it).
export const KIT_VERSION = '1.1.0';
/** Value of <meta name="generator"> on every page the kit renders, so deployments are verifiable. */
export const KIT_GENERATOR = `levimc-kit ${KIT_VERSION}`;
export const GENERATOR_META = `<meta name="generator" content="${KIT_GENERATOR}">`;
