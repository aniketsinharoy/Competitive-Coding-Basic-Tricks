import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

class SortData{
	String name;
	int no;
	SortData(String name, int no){
		this.name=name;
		this.no=no;
	}
	public String getName() {
		return name;
	}
	public int getNo() {
		return no;
	}
}
class Tester{
	
	public static Map<String, Integer> sortDataAscending(Map<String,Integer> hs){
		List<SortData> sd = new ArrayList<>();
		Map<String, Integer> sortedMap = new LinkedHashMap<>();
		for(String s : hs.keySet()){
			sd.add(new SortData(s, hs.get(s)));
		}
		Collections.sort(sd, Comparator.comparing(SortData::getNo));
		for(SortData sorted : sd){
			sortedMap.put(sorted.getName(),sorted.getNo());
		}
		return sortedMap;
	}
	public static Map<String, Integer> sortDataDescending(Map<String,Integer> hs){
		List<SortData> sd = new ArrayList<>();
		Map<String, Integer> sortedMap = new LinkedHashMap<>();
		for(String s : hs.keySet()){
			sd.add(new SortData(s, hs.get(s)));
		}
		Collections.sort(sd, Comparator.comparing(SortData::getNo).reversed());
		for(SortData sorted : sd){
			sortedMap.put(sorted.getName(),sorted.getNo());
		}
		return sortedMap;
	}
	public static void main(String[] args) {
		Map<String, Integer> hs = new HashMap<>();
		hs.put("Randita", 95);
		hs.put("Ani", 71);
		hs.put("Debolina", 74);
		hs.put("Rahul", 34);
		hs.put("Anand",99);

		System.out.println(sortDataAscending(hs));
		System.out.println(sortDataDescending(hs));
	}
}
