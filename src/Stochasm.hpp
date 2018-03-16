#include "rack.hpp"


using namespace rack;


extern Plugin *plugin;

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
        setSVG(SVG::load(assetPlugin(plugin, "res/MintKnob.svg")));
    }
};

struct StochasmTangerineKnob : StochasmKnob {
    StochasmTangerineKnob() {
        setSVG(SVG::load(assetPlugin(plugin, "res/TangerineKnob.svg")));
    }
};


struct StochasmMintLargeKnob : StochasmKnob {
    StochasmMintLargeKnob() {
        setSVG(SVG::load(assetPlugin(plugin, "res/MintKnobLarge.svg")));
    }
};

struct StochasmTangerineLargeKnob : StochasmKnob {
    StochasmTangerineLargeKnob() {
        setSVG(SVG::load(assetPlugin(plugin, "res/TangerineKnobLarge.svg")));
    }
};

struct MintMomentarySwitch : SVGSwitch, MomentarySwitch {
    MintMomentarySwitch() {
        addFrame(SVG::load(assetPlugin(plugin, "res/MintMomentary0.svg")));
        addFrame(SVG::load(assetPlugin(plugin, "res/MintMomentary1.svg")));
    }
};

struct TangerineMomentarySwitch : SVGSwitch, MomentarySwitch {
    TangerineMomentarySwitch() {
        addFrame(SVG::load(assetPlugin(plugin, "res/TangerineMomentary0.svg")));
        addFrame(SVG::load(assetPlugin(plugin, "res/TangerineMomentary1.svg")));
    }
};


/*
struct ResonatorWidget : ModuleWidget {
	ResonatorWidget();
};
*/