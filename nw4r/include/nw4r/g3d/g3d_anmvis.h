#pragma once

#include <types.h>

namespace nw4r {
    namespace g3d {

        struct ResAnmVisData;
        class ResAnmVis : public ResCommon<ResAnmVisData> {
        public:
            inline ResAnmVis() : ResCommon() {}
            inline ResAnmVis(void* data) : ResCommon(data) {}
        };

        class AnmObjVisRes : public G3dObj {
        public:
            virtual u32 IsDerivedFrom(int* unk1);

            virtual void G3dProc(int unk1, int unk2, int unk3);

            virtual ~AnmObjVisRes();

            virtual int* GetTypeObj();

            virtual int GetTypeName();

            virtual void SetFrame(float frame);

            virtual float GetFrame();

            virtual void UpdateFrame();

            virtual void SetUpdateRate(float updateRate);

            virtual float GetUpdateRate();

            virtual int Bind(ResMdl mdl);

            virtual void Release();

            virtual int* GetResult(int* unk1, int unk2);

            virtual int Attach(int unk1, int* unk2); // TODO
            virtual int* Detach(int unk1);           // TODO

            static AnmObjVisRes* Construct(MEMAllocator* allocator, int* instanceSize, ResAnmVis anim, ResMdl mdl);

            char _spacer[40];

            ResAnmVis m_anmVisFile;
        };
    }
}

// Size: 48