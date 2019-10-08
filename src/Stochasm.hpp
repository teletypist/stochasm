#include "rack.hpp"


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
        setSVG(APP->window->loadSvg(asset::plugin(pluginInstance, "res/MintKnob.svg")));
    }
};

struct StochasmTangerineKnob : StochasmKnob {
    StochasmTangerineKnob() {
        setSVG(APP->window->loadSvg(asset::plugin(pluginInstance, "res/TangerineKnob.svg")));
    }
};


struct StochasmMintLargeKnob : StochasmKnob {
    StochasmMintLargeKnob() {
        setSVG(APP->window->loadSvg(asset::plugin(pluginInstance, "res/MintKnobLarge.svg")));
    }
};

struct StochasmTangerineLargeKnob : StochasmKnob {
    StochasmTangerineLargeKnob() {
        setSVG(APP->window->loadSvg(asset::plugin(pluginInstance, "res/TangerineKnobLarge.svg")));
    }
};

struct MintMomentarySwitch : SVGSwitch {
    MintMomentarySwitch() {
        momentary = true;
        addFrame(APP->window->loadSvg(asset::plugin(pluginInstance, "res/MintMomentary0.svg")));
        addFrame(APP->window->loadSvg(asset::plugin(pluginInstance, "res/MintMomentary1.svg")));
    }
};

struct TangerineMomentarySwitch : SVGSwitch {
    TangerineMomentarySwitch() {
        momentary = true;
        addFrame(APP->window->loadSvg(asset::plugin(pluginInstance, "res/TangerineMomentary0.svg")));
        addFrame(APP->window->loadSvg(asset::plugin(pluginInstance, "res/TangerineMomentary1.svg")));
    }
};


/*
struct ResonatorWidget : ModuleWidget {
	ResonatorWidget();
};
*/
