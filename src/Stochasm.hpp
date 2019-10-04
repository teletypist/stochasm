#include "rack0.hpp"


using namespace rack;


extern Plugin *pluginInstance;

extern Model *modelResonator;

////////////////////
// module widgets
////////////////////

extern Model *modelResonator;

struct StochasmKnob : SVGKnob {
    StochasmKnob() {
        minAngle = -0.75*M_PI;
        maxAngle = 0.75*M_PI;
    }
};

struct StochasmMintKnob : StochasmKnob {
    StochasmMintKnob() {
        setSVG(SVG::load(assetPlugin(pluginInstance, "res/MintKnob.svg")));
    }
};

struct StochasmTangerineKnob : StochasmKnob {
    StochasmTangerineKnob() {
        setSVG(SVG::load(assetPlugin(pluginInstance, "res/TangerineKnob.svg")));
    }
};


struct StochasmMintLargeKnob : StochasmKnob {
    StochasmMintLargeKnob() {
        setSVG(SVG::load(assetPlugin(pluginInstance, "res/MintKnobLarge.svg")));
    }
};

struct StochasmTangerineLargeKnob : StochasmKnob {
    StochasmTangerineLargeKnob() {
        setSVG(SVG::load(assetPlugin(pluginInstance, "res/TangerineKnobLarge.svg")));
    }
};

struct MintMomentarySwitch : SVGSwitch {
    MintMomentarySwitch() {
        addFrame(SVG::load(assetPlugin(pluginInstance, "res/MintMomentary0.svg")));
        addFrame(SVG::load(assetPlugin(pluginInstance, "res/MintMomentary1.svg")));
    }
};

struct TangerineMomentarySwitch : SVGSwitch {
    TangerineMomentarySwitch() {
        addFrame(SVG::load(assetPlugin(pluginInstance, "res/TangerineMomentary0.svg")));
        addFrame(SVG::load(assetPlugin(pluginInstance, "res/TangerineMomentary1.svg")));
    }
};


/*
struct ResonatorWidget : ModuleWidget {
	ResonatorWidget();
};
*/