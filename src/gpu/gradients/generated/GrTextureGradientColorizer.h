/*
 * Copyright 2018 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

/**************************************************************************************************
 *** This file was autogenerated from GrTextureGradientColorizer.fp; do not modify.
 **************************************************************************************************/
#ifndef GrTextureGradientColorizer_DEFINED
#define GrTextureGradientColorizer_DEFINED
#include "SkTypes.h"
#include "GrFragmentProcessor.h"
#include "GrCoordTransform.h"
class GrTextureGradientColorizer : public GrFragmentProcessor {
public:
    static std::unique_ptr<GrFragmentProcessor> Make(sk_sp<GrTextureProxy> gradient) {
        return std::unique_ptr<GrFragmentProcessor>(new GrTextureGradientColorizer(gradient));
    }
    GrTextureGradientColorizer(const GrTextureGradientColorizer& src);
    std::unique_ptr<GrFragmentProcessor> clone() const override;
    const char* name() const override { return "TextureGradientColorizer"; }
    TextureSampler gradient;

private:
    GrTextureGradientColorizer(sk_sp<GrTextureProxy> gradient)
            : INHERITED(kGrTextureGradientColorizer_ClassID, kNone_OptimizationFlags)
            , gradient(std::move(gradient), GrSamplerState::ClampBilerp()) {
        this->setTextureSamplerCnt(1);
    }
    GrGLSLFragmentProcessor* onCreateGLSLInstance() const override;
    void onGetGLSLProcessorKey(const GrShaderCaps&, GrProcessorKeyBuilder*) const override;
    bool onIsEqual(const GrFragmentProcessor&) const override;
    const TextureSampler& onTextureSampler(int) const override;
    GR_DECLARE_FRAGMENT_PROCESSOR_TEST
    typedef GrFragmentProcessor INHERITED;
};
#endif
