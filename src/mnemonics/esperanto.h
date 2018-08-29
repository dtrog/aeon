// Copyright (c) 2014-2019, AEON, The Monero Project
// 
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
// 
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

/*!
 * \file esperanto.h
 * 
 * \brief New Esperanto word list and map.
 */

/*
 * Word list authored by: dnaleor, Engelberg, ProkhorZ
 * Sources:
 *   Baza Radikaro Oficiala
 *   Reta Vortaro (http://www.reta-vortaro.de/revo/)
 *   Esperanto Panorama - Esperanto-English Dictionary (https://www.esperanto-panorama.net/vortaro/eoen.htm)
 *   ESPDIC - Paul Denisowski (http://www.denisowski.org/Esperanto/ESPDIC/espdic.txt)
 */

#ifndef ESPERANTO_H
#define ESPERANTO_H

#include <vector>
#include <unordered_map>
#include "language_base.h"
#include <string>

/*!
 * \namespace Language
 * \brief Mnemonic language related namespace.
 */
namespace Language
{
  class Esperanto: public Base
  {
  public:
    Esperanto(): Base("Esperanto", "Esperanto", {}, 4)
    {
      static constexpr const char * const words[NWORDS] =
      {
      "abako",
      "abdiki",
      "abelo",
      "abituriento",
      "ablativo",
      "abnorma",
      "abonantoj",
      "abrikoto",
      "absoluta",
      "abunda",
      "acetono",
      "acida",
      "adapti",
      "adekvata",
      "adheri",
      "adicii",
      "adjektivo",
      "administri",
      "adolesko",
      "adreso",
      "adstringa",
      "adulto",
      "advokato",
      "adzo",
      "aeroplano",
      "aferulo",
      "afgana",
      "afiksi",
      "aflaba",
      "aforismo",
      "afranki",
      "aftozo",
      "afusto",
      "agavo",
      "agento",
      "agiti",
      "aglo",
      "agmaniero",
      "agnoski",
      "agordo",
      "agrabla",
      "agtipo",
      "agutio",
      "aikido",
      "ailanto",
      "aina",
      "ajatolo",
      "ajgenvaloro",
      "ajlobulbo",
      "ajnlitera",
      "ajuto",
      "ajzi",
      "akademio",
      "akcepti",
      "akeo",
      "akiri",
      "aklamado",
      "akmeo",
      "akno",
      "akompani",
      "akrobato",
      "akselo",
      "aktiva",
      "akurata",
      "akvofalo",
      "alarmo",
      "albumo",
      "alcedo",
      "aldoni",
      "aleo",
      "alfabeto",
      "algo",
      "alhasti",
      "aligatoro",
      "alkoholo",
      "almozo",
      "alnomo",
      "alojo",
      "alpinisto",
      "alrigardi",
      "alskribi",
      "alta",
      "alumeto",
      "alveni",
      "alzaca",
      "amaso",
      "ambasado",
      "amdeklaro",
      "amebo",
      "amfibio",
      "amhara",
      "amiko",
      "amkanto",
      "amletero",
      "amnestio",
      "amoranto",
      "amplekso",
      "amrakonto",
      "amsterdama",
      "amuzi",
      "ananaso",
      "androido",
      "anekdoto",
      "anfrakto",
      "angulo",
      "anheli",
      "animo",
      "anjono",
      "ankro",
      "anonci",
      "anpriskribo",
      "ansero",
      "antikva",
      "anuitato",
      "aorto",
      "aparta",
      "aperti",
      "apika",
      "aplikado",
      "apneo",
      "apogi",
      "aprobi",
      "apsido",
      "apterigo",
      "apudesto",
      "araneo",
      "arbo",
      "ardeco",
      "aresti",
      "argilo",
      "aristokrato",
      "arko",
      "arlekeno",
      "armi",
      "arniko",
      "aromo",
      "arpio",
      "arsenalo",
      "artisto",
      "aruba",
      "arvorto",
      "asaio",
      "asbesto",
      "ascendi",
      "asekuri",
      "asfalto",
      "asisti",
      "askalono",
      "asocio",
      "aspekti",
      "astro",
      "asulo",
      "atakonto",
      "atendi",
      "atingi",
      "atleto",
      "atmosfero",
      "atomo",
      "atropino",
      "atuto",
      "avataro",
      "aventuro",
      "aviadilo",
      "avokado",
      "azaleo",
      "azbuko",
      "azenino",
      "azilpetanto",
      "azoto",
      "azteka",
      "babili",
      "bacilo",
      "badmintono",
      "bagatelo",
      "bahama",
      "bajoneto",
      "baki",
      "balai",
      "bambuo",
      "bani",
      "baobabo",
      "bapti",
      "baro",
      "bastono",
      "batilo",
      "bavara",
      "bazalto",
      "beata",
      "bebofono",
      "bedo",
      "begonio",
      "behaviorismo",
      "bejlo",
      "bekero",
      "belarto",
      "bemolo",
      "benko",
      "bereto",
      "besto",
      "betulo",
      "bevelo",
      "bezoni",
      "biaso",
      "biblioteko",
      "biciklo",
      "bidaro",
      "bieno",
      "bifsteko",
      "bigamiulo",
      "bijekcio",
      "bikino",
      "bildo",
      "bimetalismo",
      "bindi",
      "biografio",
      "birdo",
      "biskvito",
      "bitlibro",
      "bivako",
      "bizara",
      "bjalistoka",
      "blanka",
      "bleki",
      "blinda",
      "blovi",
      "blua",
      "boato",
      "bobsledo",
      "bocvanano",
      "bodisatvo",
      "bofratino",
      "bogefratoj",
      "bohema",
      "boji",
      "bokalo",
      "boli",
      "bombono",
      "bona",
      "bopatrino",
      "bordo",
      "bosko",
      "botelo",
      "bovido",
      "brakpleno",
      "bretaro",
      "brikmuro",
      "broso",
      "brulema",
      "bubalo",
      "buctrapi",
      "budo",
      "bufedo",
      "bugio",
      "bujabeso",
      "buklo",
      "buldozo",
      "bumerango",
      "bunta",
      "burokrataro",
      "busbileto",
      "butero",
      "buzuko",
      "caro",
      "cebo",
      "ceceo",
      "cedro",
      "cefalo",
      "cejana",
      "cekumo",
      "celebri",
      "cemento",
      "cent",
      "cepo",
      "certa",
      "cetera",
      "cezio",
      "ciano",
      "cibeto",
      "cico",
      "cidro",
      "cifero",
      "cigaredo",
      "ciklo",
      "cilindro",
      "cimbalo",
      "cinamo",
      "cipreso",
      "cirkonstanco",
      "cisterno",
      "citrono",
      "ciumi",
      "civilizado",
      "colo",
      "congo",
      "cunamo",
      "cvana",
      "dabi",
      "daco",
      "dadaismo",
      "dafodilo",
      "dago",
      "daimio",
      "dajmono",
      "daktilo",
      "dalio",
      "damo",
      "danki",
      "darmo",
      "datumoj",
      "dazipo",
      "deadmoni",
      "debeto",
      "decidi",
      "dedukti",
      "deerigi",
      "defendi",
      "degeli",
      "dehaki",
      "deirpunkto",
      "deklaracio",
      "delikata",
      "demandi",
      "dento",
      "dependi",
      "derivi",
      "desegni",
      "detrui",
      "devi",
      "deziri",
      "dialogo",
      "dicentro",
      "didaktika",
      "dieto",
      "diferenci",
      "digesti",
      "diino",
      "dikfingro",
      "diligenta",
      "dimensio",
      "dinamo",
      "diodo",
      "diplomo",
      "direkte",
      "diskuti",
      "diurno",
      "diversa",
      "dizajno",
      "dobrogitaro",
      "docento",
      "dogano",
      "dojeno",
      "doktoro",
      "dolori",
      "domego",
      "donaci",
      "dopado",
      "dormi",
      "dosierujo",
      "dotita",
      "dozeno",
      "drato",
      "dresi",
      "drinki",
      "droni",
      "druido",
      "duaranga",
      "dubi",
      "ducent",
      "dudek",
      "duelo",
      "dufoje",
      "dugongo",
      "duhufa",
      "duilo",
      "dujare",
      "dukato",
      "duloka",
      "dumtempe",
      "dungi",
      "duobla",
      "dupiedulo",
      "dura",
      "dusenca",
      "dutaga",
      "duuma",
      "duvalvuloj",
      "duzo",
      "ebena",
      "eblecoj",
      "ebono",
      "ebria",
      "eburo",
      "ecaro",
      "ecigi",
      "ecoj",
      "edelvejso",
      "editoro",
      "edro",
      "eduki",
      "edzino",
      "efektiva",
      "efiki",
      "efloreski",
      "egala",
      "egeco",
      "egiptologo",
      "eglefino",
      "egoista",
      "egreto",
      "ejakuli",
      "ejlo",
      "ekarto",
      "ekbruligi",
      "ekceli",
      "ekde",
      "ekesti",
      "ekfirmao",
      "ekgliti",
      "ekhavi",
      "ekipi",
      "ekkapti",
      "eklezio",
      "ekmalsati",
      "ekonomio",
      "ekpluvi",
      "ekrano",
      "ekster",
      "ektiri",
      "ekumeno",
      "ekvilibro",
      "ekzemplo",
      "elasta",
      "elbalai",
      "elcento",
      "eldoni",
      "elektro",
      "elfari",
      "elgliti",
      "elhaki",
      "elipso",
      "elkovi",
      "ellasi",
      "elmeti",
      "elnutri",
      "elokventa",
      "elparoli",
      "elrevigi",
      "elstari",
      "elteni",
      "eluzita",
      "elvoki",
      "elzasa",
      "emajlo",
      "embaraso",
      "emerito",
      "emfazo",
      "eminenta",
      "emocio",
      "empiria",
      "emulsio",
      "enarkivigi",
      "enboteligi",
      "enciklopedio",
      "endorfino",
      "energio",
      "enfermi",
      "engluti",
      "enhavo",
      "enigmo",
      "enjekcio",
      "enketi",
      "enlanda",
      "enmeti",
      "enorma",
      "enplanti",
      "enradiki",
      "enspezo",
      "entrepreni",
      "enui",
      "envolvi",
      "enzimo",
      "eono",
      "eosto",
      "epitafo",
      "epoko",
      "epriskribebla",
      "epsilono",
      "erari",
      "erbio",
      "erco",
      "erekti",
      "ergonomia",
      "erikejo",
      "ermito",
      "erotika",
      "erpilo",
      "erupcio",
      "esameno",
      "escepti",
      "esenco",
      "eskapi",
      "esotera",
      "esperi",
      "estonto",
      "etapo",
      "etendi",
      "etfingro",
      "etikedo",
      "etlitero",
      "etmakleristo",
      "etnika",
      "etoso",
      "etradio",
      "etskala",
      "etullernejo",
      "evakui",
      "evento",
      "eviti",
      "evolui",
      "ezoko",
      "fabriko",
      "facila",
      "fadeno",
      "fagoto",
      "fajro",
      "fakto",
      "fali",
      "familio",
      "fanatiko",
      "farbo",
      "fasko",
      "fatala",
      "favora",
      "fazeolo",
      "febro",
      "federacio",
      "feino",
      "fekunda",
      "felo",
      "femuro",
      "fenestro",
      "fermi",
      "festi",
      "fetora",
      "fezo",
      "fiasko",
      "fibro",
      "fidela",
      "fiera",
      "fifama",
      "figuro",
      "fiherbo",
      "fiinsekto",
      "fiksa",
      "filmo",
      "fimensa",
      "finalo",
      "fiolo",
      "fiparoli",
      "firmao",
      "fisko",
      "fitingo",
      "fiuzanto",
      "fivorto",
      "fiziko",
      "fjordo",
      "flago",
      "flegi",
      "flirti",
      "floro",
      "flugi",
      "fobio",
      "foceno",
      "foirejo",
      "fojfoje",
      "fokuso",
      "folio",
      "fomenti",
      "fonto",
      "formulo",
      "fosforo",
      "fotografi",
      "fratino",
      "fremda",
      "friti",
      "frosto",
      "frua",
      "ftizo",
      "fuelo",
      "fugo",
      "fuksia",
      "fulmilo",
      "fumanto",
      "fundamento",
      "fuorto",
      "furioza",
      "fusilo",
      "futbalo",
      "fuzio",
      "gabardino",
      "gado",
      "gaela",
      "gafo",
      "gagato",
      "gaja",
      "gaki",
      "galanta",
      "gamao",
      "ganto",
      "gapulo",
      "gardi",
      "gasto",
      "gavio",
      "gazeto",
      "geamantoj",
      "gebani",
      "geedzeco",
      "gefratoj",
      "geheno",
      "gejsero",
      "geko",
      "gelateno",
      "gemisto",
      "geniulo",
      "geografio",
      "gepardo",
      "geranio",
      "gestolingvo",
      "geto",
      "geumo",
      "gibono",
      "giganta",
      "gildo",
      "gimnastiko",
      "ginekologo",
      "gipsi",
      "girlando",
      "gistfungo",
      "gitaro",
      "glazuro",
      "glebo",
      "gliti",
      "globo",
      "gluti",
      "gnafalio",
      "gnejso",
      "gnomo",
      "gnuo",
      "gobio",
      "godetio",
      "goeleto",
      "gojo",
      "golfludejo",
      "gombo",
      "gondolo",
      "gorilo",
      "gospelo",
      "gotika",
      "granda",
      "greno",
      "griza",
      "groto",
      "grupo",
      "guano",
      "gubernatoro",
      "gudrotuko",
      "gufo",
      "gujavo",
      "guldeno",
      "gumi",
      "gupio",
      "guruo",
      "gusto",
      "guto",
      "guvernistino",
      "gvardio",
      "gverilo",
      "gvidanto",
      "habitato",
      "hadito",
      "hafnio",
      "hagiografio",
      "haitiano",
      "hajlo",
      "hakbloko",
      "halti",
      "hamstro",
      "hangaro",
      "hapalo",
      "haro",
      "hasta",
      "hati",
      "havebla",
      "hazardo",
      "hebrea",
      "hedero",
      "hegemonio",
      "hejmo",
      "hektaro",
      "helpi",
      "hemisfero",
      "heni",
      "hepato",
      "herbo",
      "hesa",
      "heterogena",
      "heziti",
      "hiacinto",
      "hibrida",
      "hidrogeno",
      "hieroglifo",
      "higieno",
      "hihii",
      "hilumo",
      "himno",
      "hindino",
      "hiperteksto",
      "hirundo",
      "historio",
      "hobio",
      "hojli",
      "hokeo",
      "hologramo",
      "homido",
      "honesta",
      "hopi",
      "horizonto",
      "hospitalo",
      "hotelo",
      "huadi",
      "hubo",
      "hufumo",
      "hugenoto",
      "hukero",
      "huligano",
      "humana",
      "hundo",
      "huoj",
      "hupilo",
      "hurai",
      "husaro",
      "hutuo",
      "huzo",
      "iafoje",
      "iagrade",
      "iamaniere",
      "iarelate",
      "iaspeca",
      "ibekso",
      "ibiso",
      "idaro",
      "ideala",
      "idiomo",
      "idolo",
      "iele",
      "igluo",
      "ignori",
      "iguamo",
      "igvano",
      "ikono",
      "iksodo",
      "ikto",
      "iliaflanke",
      "ilkomputilo",
      "ilobreto",
      "ilremedo",
      "ilumini",
      "imagi",
      "imitado",
      "imperio",
      "imuna",
      "incidento",
      "industrio",
      "inerta",
      "infano",
      "ingenra",
      "inhali",
      "iniciati",
      "injekti",
      "inklino",
      "inokuli",
      "insekto",
      "inteligenta",
      "inundi",
      "inviti",
      "ioma",
      "ionosfero",
      "iperito",
      "ipomeo",
      "irana",
      "irejo",
      "irigacio",
      "ironio",
      "isato",
      "islamo",
      "istempo",
      "itinero",
      "itrio",
      "iuloke",
      "iumaniere",
      "iutempe",
      "izolita",
      "jado",
      "jaguaro",
      "jakto",
      "jama",
      "januaro",
      "japano",
      "jarringo",
      "jazo",
      "jenoj",
      "jesulo",
      "jetavio",
      "jezuito",
      "jodli",
      "joviala",
      "juano",
      "jubileo",
      "judismo",
      "jufto",
      "juki",
      "julio",
      "juneca",
      "jupo",
      "juristo",
      "juste",
      "juvelo",
      "kabineto",
      "kadrato",
      "kafo",
      "kahelo",
      "kajako",
      "kakao",
      "kalkuli",
      "kampo",
      "kanti",
      "kapitalo",
      "karaktero",
      "kaserolo",
      "katapulto",
      "kaverna",
      "kazino",
      "kebabo",
      "kefiro",
      "keglo",
      "kejlo",
      "kekso",
      "kelka",
      "kemio",
      "kerno",
      "kesto",
      "kiamaniere",
      "kibuco",
      "kidnapi",
      "kielo",
      "kikero",
      "kilogramo",
      "kimono",
      "kinejo",
      "kiosko",
      "kirurgo",
      "kisi",
      "kitelo",
      "kivio",
      "klavaro",
      "klerulo",
      "klini",
      "klopodi",
      "klubo",
      "knabo",
      "knedi",
      "koalo",
      "kobalto",
      "kodigi",
      "kofro",
      "kohera",
      "koincidi",
      "kojoto",
      "kokoso",
      "koloro",
      "komenci",
      "kontrakto",
      "kopio",
      "korekte",
      "kosti",
      "kotono",
      "kovri",
      "krajono",
      "kredi",
      "krii",
      "krom",
      "kruco",
      "ksantino",
      "ksenono",
      "ksilofono",
      "ksosa",
      "kubuto",
      "kudri",
      "kuglo",
      "kuiri",
      "kuko",
      "kulero",
      "kumuluso",
      "kuneco",
      "kupro",
      "kuri",
      "kuseno",
      "kutimo",
      "kuvo",
      "kuzino",
      "kvalito",
      "kverko",
      "kvin",
      "kvoto",
      "labori",
      "laculo",
      "ladbotelo",
      "lafo",
      "laguno",
      "laikino",
      "laktobovino",
      "lampolumo",
      "landkarto",
      "laosa",
      "lapono",
      "larmoguto",
      "lastjare",
      "latitudo",
      "lavejo",
      "lazanjo",
      "leciono",
      "ledosako",
      "leganto",
      "lekcio",
      "lemura",
      "lentuga",
      "leopardo",
      "leporo",
      "lerni",
      "lesivo",
      "letero",
      "levilo",
      "lezi",
      "liano",
      "libera",
      "liceo",
      "lieno",
      "lifto",
      "ligilo",
      "likvoro",
      "lila",
      "limono",
      "lingvo",
      "lipo",
      "lirika",
      "listo",
      "literatura",
      "liveri",
      "lobio",
      "logika",
      "lojala",
      "lokalo",
      "longa",
      "lordo",
      "lotado",
      "loza",
      "luanto",
      "lubriki",
      "lucida",
      "ludema",
      "luigi",
      "lukso",
      "luli",
      "lumbilda",
      "lunde",
      "lupago",
      "lustro",
      "lutilo",
      "luzerno",
      "maato",
      "maceri",
      "madono",
      "mafiano",
      "magazeno",
      "mahometano",
      "maizo",
      "majstro",
      "maketo",
      "malgranda",
      "mamo",
      "mandareno",
      "maorio",
      "mapigi",
      "marini",
      "masko",
      "mateno",
      "mazuto",
      "meandro",
      "meblo",
      "mecenato",
      "medialo",
      "mefito",
      "megafono",
      "mejlo",
      "mekanika",
      "melodia",
      "membro",
      "mendi",
      "mergi",
      "mespilo",
      "metoda",
      "mevo",
      "mezuri",
      "miaflanke",
      "micelio",
      "mielo",
      "migdalo",
      "mikrofilmo",
      "militi",
      "mimiko",
      "mineralo",
      "miopa",
      "miri",
      "mistera",
      "mitralo",
      "mizeri",
      "mjelo",
      "mnemoniko",
      "mobilizi",
      "mocio",
      "moderna",
      "mohajro",
      "mokadi",
      "molaro",
      "momento",
      "monero",
      "mopso",
      "mordi",
      "moskito",
      "motoro",
      "movimento",
      "mozaiko",
      "mueli",
      "mukozo",
      "muldi",
      "mumio",
      "munti",
      "muro",
      "muskolo",
      "mutacio",
      "muzikisto",
      "nabo",
      "nacio",
      "nadlo",
      "nafto",
      "naiva",
      "najbaro",
      "nanometro",
      "napo",
      "narciso",
      "naski",
      "naturo",
      "navigi",
      "naztruo",
      "neatendite",
      "nebulo",
      "necesa",
      "nedankinde",
      "neebla",
      "nefari",
      "negoco",
      "nehavi",
      "neimagebla",
      "nektaro",
      "nelonga",
      "nematura",
      "nenia",
      "neordinara",
      "nepra",
      "nervuro",
      "nesto",
      "nete",
      "neulo",
      "nevino",
      "nifo",
      "nigra",
      "nihilisto",
      "nikotino",
      "nilono",
      "nimfeo",
      "nitrogeno",
      "nivelo",
      "nobla",
      "nocio",
      "nodozo",
      "nokto",
      "nomkarto",
      "norda",
      "nostalgio",
      "notbloko",
      "novico",
      "nuanco",
      "nuboza",
      "nuda",
      "nugato",
      "nuklea",
      "nuligi",
      "numero",
      "nuntempe",
      "nupto",
      "nura",
      "nutri",
      "oazo",
      "obei",
      "objekto",
      "oblikva",
      "obolo",
      "observi",
      "obtuza",
      "obuso",
      "oceano",
      "odekolono",
      "odori",
      "oferti",
      "oficiala",
      "ofsajdo",
      "ofte",
      "ogivo",
      "ogro",
      "ojstredoj",
      "okaze",
      "okcidenta",
      "okro",
      "oksido",
      "oktobro",
      "okulo",
      "oldulo",
      "oleo",
      "olivo",
      "omaro",
      "ombro",
      "omego",
      "omikrono",
      "omleto",
      "omnibuso",
      "onagro",
      "ondo",
      "oneco",
      "onidire",
      "onklino",
      "onlajna",
      "onomatopeo",
      "ontologio",
      "opaka",
      "operacii",
      "opinii",
      "oportuna",
      "opresi",
      "optimisto",
      "oratoro",
      "orbito",
      "ordinara",
      "orelo",
      "orfino",
      "organizi",
      "orienta",
      "orkestro",
      "orlo",
      "orminejo",
      "ornami",
      "ortangulo",
      "orumi",
      "oscedi",
      "osmozo",
      "ostocerbo",
      "ovalo",
      "ovingo",
      "ovoblanko",
      "ovri",
      "ovulado",
      "ozono",
      "pacama",
      "padeli",
      "pafilo",
      "pagigi",
      "pajlo",
      "paketo",
      "palaco",
      "pampelmo",
      "pantalono",
      "papero",
      "paroli",
      "pasejo",
      "patro",
      "pavimo",
      "peco",
      "pedalo",
      "peklita",
      "pelikano",
      "pensiono",
      "peplomo",
      "pesilo",
      "petanto",
      "pezoforto",
      "piano",
      "picejo",
      "piede",
      "pigmento",
      "pikema",
      "pilkoludo",
      "pimento",
      "pinglo",
      "pioniro",
      "pipromento",
      "pirato",
      "pistolo",
      "pitoreska",
      "piulo",
      "pivoti",
      "pizango",
      "planko",
      "plektita",
      "plibonigi",
      "ploradi",
      "plurlingva",
      "pobo",
      "podio",
      "poeto",
      "pogranda",
      "pohora",
      "pokalo",
      "politekniko",
      "pomarbo",
      "ponevosto",
      "populara",
      "porcelana",
      "postkompreno",
      "poteto",
      "poviga",
      "pozitiva",
      "prapatroj",
      "precize",
      "pridemandi",
      "probable",
      "pruntanto",
      "psalmo",
      "psikologio",
      "psoriazo",
      "pterido",
      "publiko",
      "pudro",
      "pufo",
      "pugnobato",
      "pulovero",
      "pumpi",
      "punkto",
      "pupo",
      "pureo",
      "puso",
      "putrema",
      "puzlo",
      "rabate",
      "racionala",
      "radiko",
      "rafinado",
      "raguo",
      "rajto",
      "rakonti",
      "ralio",
      "rampi",
      "rando",
      "rapida",
      "rastruma",
      "ratifiki",
      "raviolo",
      "razeno",
      "reakcio",
      "rebildo",
      "recepto",
      "redakti",
      "reenigi",
      "reformi",
      "regiono",
      "rehavi",
      "reinspekti",
      "rejesi",
      "reklamo",
      "relativa",
      "rememori",
      "renkonti",
      "reorganizado",
      "reprezenti",
      "respondi",
      "retumilo",
      "reuzebla",
      "revidi",
      "rezulti",
      "rialo",
      "ribeli",
      "ricevi",
      "ridiga",
      "rifuginto",
      "rigardi",
      "rikolti",
      "rilati",
      "rimarki",
      "rinocero",
      "ripozi",
      "riski",
      "ritmo",
      "rivero",
      "rizokampo",
      "roboto",
      "rododendro",
      "rojo",
      "rokmuziko",
      "rolvorto",
      "romantika",
      "ronroni",
      "rosino",
      "rotondo",
      "rovero",
      "rozeto",
      "rubando",
      "rudimenta",
      "rufa",
      "rugbeo",
      "ruino",
      "ruleto",
      "rumoro",
      "runo",
      "rupio",
      "rura",
      "rustimuna",
      "ruzulo",
      "sabato",
      "sadismo",
      "safario",
      "sagaca",
      "sakfluto",
      "salti",
      "samtage",
      "sandalo",
      "sapejo",
      "sarongo",
      "satelito",
      "savano",
      "sbiro",
      "sciado",
      "seanco",
      "sebo",
      "sedativo",
      "segligno",
      "sekretario",
      "selektiva",
      "semajno",
      "senpeza",
      "separeo",
      "servilo",
      "sesangulo",
      "setli",
      "seurigi",
      "severa",
      "sezono",
      "sfagno",
      "sfero",
      "sfinkso",
      "siatempe",
      "siblado",
      "sidejo",
      "siesto",
      "sifono",
      "signalo",
      "siklo",
      "silenti",
      "simpla",
      "sinjoro",
      "siropo",
      "sistemo",
      "situacio",
      "siverto",
      "sizifa",
      "skatolo",
      "skemo",
      "skianto",
      "sklavo",
      "skorpio",
      "skribisto",
      "skulpti",
      "skvamo",
      "slango",
      "sledeto",
      "sliparo",
      "smeraldo",
      "smirgi",
      "smokingo",
      "smuto",
      "snoba",
      "snufegi",
      "sobra",
      "sociano",
      "sodakvo",
      "sofo",
      "soifi",
      "sojlo",
      "soklo",
      "soldato",
      "somero",
      "sonilo",
      "sopiri",
      "sorto",
      "soulo",
      "soveto",
      "sparkado",
      "speciala",
      "spiri",
      "splito",
      "sporto",
      "sprita",
      "spuro",
      "stabila",
      "stelfiguro",
      "stimulo",
      "stomako",
      "strato",
      "studanto",
      "subgrupo",
      "suden",
      "suferanta",
      "sugesti",
      "suito",
      "sukero",
      "sulko",
      "sume",
      "sunlumo",
      "super",
      "surskribeto",
      "suspekti",
      "suturo",
      "svati",
      "svenfali",
      "svingi",
      "svopo",
      "tabako",
      "taglumo",
      "tajloro",
      "taksimetro",
      "talento",
      "tamen",
      "tanko",
      "taoismo",
      "tapioko",
      "tarifo",
      "tasko",
      "tatui",
      "taverno",
      "teatro",
      "tedlaboro",
      "tegmento",
      "tehoro",
      "teknika",
      "telefono",
      "tempo",
      "tenisejo",
      "teorie",
      "teraso",
      "testudo",
      "tetablo",
      "teujo",
      "tezo",
      "tialo",
      "tibio",
      "tielnomata",
      "tifono",
      "tigro",
      "tikli",
      "timida",
      "tinkturo",
      "tiom",
      "tiparo",
      "tirkesto",
      "titolo",
      "tiutempe",
      "tizano",
      "tobogano",
      "tofeo",
      "togo",
      "toksa",
      "tolerema",
      "tombolo",
      "tondri",
      "topografio",
      "tordeti",
      "tosti",
      "totalo",
      "traduko",
      "tredi",
      "triangulo",
      "tropika",
      "trumpeto",
      "tualeto",
      "tubisto",
      "tufgrebo",
      "tuja",
      "tukano",
      "tulipo",
      "tumulto",
      "tunelo",
      "turisto",
      "tusi",
      "tutmonda",
      "tvisto",
      "udono",
      "uesto",
      "ukazo",
      "ukelelo",
      "ulcero",
      "ulmo",
      "ultimato",
      "ululi",
      "umbiliko",
      "unco",
      "ungego",
      "uniformo",
      "unkti",
      "unukolora",
      "uragano",
      "urbano",
      "uretro",
      "urino",
      "ursido",
      "uskleco",
      "usonigi",
      "utero",
      "utila",
      "utopia",
      "uverturo",
      "uzadi",
      "uzeblo",
      "uzino",
      "uzkutimo",
      "uzofini",
      "uzurpi",
      "uzvaloro",
      "vadejo",
      "vafleto",
      "vagono",
      "vahabismo",
      "vajco",
      "vakcino",
      "valoro",
      "vampiro",
      "vangharoj",
      "vaporo",
      "varma",
      "vasta",
      "vato",
      "vazaro",
      "veaspekta",
      "vedismo",
      "vegetalo",
      "vehiklo",
      "vejno",
      "vekita",
      "velstango",
      "vemieno",
      "vendi",
      "vepro",
      "verando",
      "vespero",
      "veturi",
      "veziko",
      "viando",
      "vibri",
      "vico",
      "videbla",
      "vifio",
      "vigla",
      "viktimo",
      "vila",
      "vimeno",
      "vintro",
      "violo",
      "vippuno",
      "virtuala",
      "viskoza",
      "vitro",
      "viveca",
      "viziti",
      "vobli",
      "vodko",
      "vojeto",
      "vokegi",
      "volbo",
      "vomema",
      "vono",
      "vortaro",
      "vosto",
      "voti",
      "vrako",
      "vringi",
      "vualo",
      "vulkano",
      "vundo",
      "vuvuzelo",
      "zamenhofa",
      "zapi",
      "zebro",
      "zefiro",
      "zeloto",
      "zenismo",
      "zeolito",
      "zepelino",
      "zeto",
      "zigzagi",
      "zinko",
      "zipo",
      "zirkonio",
      "zodiako",
      "zoeto",
      "zombio",
      "zono",
      "zoologio",
      "zorgi",
      "zukino",
      "zumilo",
      };
      set_words(words);
      populate_maps();
    }
  };
}

#endif
